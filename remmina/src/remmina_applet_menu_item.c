/*
 * Remmina - The GTK+ Remote Desktop Client
 * Copyright (C) 2009-2010 Vic Lee 
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, 
 * Boston, MA 02111-1307, USA.
 *
 *  In addition, as a special exception, the copyright holders give
 *  permission to link the code of portions of this program with the
 *  OpenSSL library under certain conditions as described in each
 *  individual source file, and distribute linked combinations
 *  including the two.
 *  You must obey the GNU General Public License in all respects
 *  for all of the code used other than OpenSSL. *  If you modify
 *  file(s) with this exception, you may extend this exception to your
 *  version of the file(s), but you are not obligated to do so. *  If you
 *  do not wish to do so, delete this exception statement from your
 *  version. *  If you delete this exception statement from all source
 *  files in the program, then also delete it here.
 *
 */

#include <gtk/gtk.h>
#include <glib/gi18n.h>
#include <string.h>
#include <stdarg.h>
#include "remmina_applet_menu_item.h"

G_DEFINE_TYPE( RemminaAppletMenuItem, remmina_applet_menu_item, GTK_TYPE_IMAGE_MENU_ITEM)

#define IS_EMPTY(s) ((!s)||(s[0]==0))

static void remmina_applet_menu_item_destroy(RemminaAppletMenuItem* item, gpointer data)
{
	g_free(item->filename);
	g_free(item->name);
	g_free(item->group);
	g_free(item->protocol);
	g_free(item->server);
}

static void remmina_applet_menu_item_class_init(RemminaAppletMenuItemClass* klass)
{
}

static void remmina_applet_menu_item_init(RemminaAppletMenuItem* item)
{
	item->filename = NULL;
	item->name = NULL;
	item->group = NULL;
	item->protocol = NULL;
	item->server = NULL;
	item->ssh_enabled = FALSE;
	g_signal_connect(G_OBJECT(item), "destroy", G_CALLBACK(remmina_applet_menu_item_destroy), NULL);
}

GtkWidget* remmina_applet_menu_item_new(RemminaAppletMenuItemType item_type, ...)
{
	va_list ap;
	RemminaAppletMenuItem* item;
	GKeyFile* gkeyfile;
	GtkWidget* widget;
	const gchar* iconname;

	va_start(ap, item_type);

	item = REMMINA_APPLET_MENU_ITEM(g_object_new(REMMINA_TYPE_APPLET_MENU_ITEM, NULL));

	item->item_type = item_type;

	switch (item_type)
	{
		case REMMINA_APPLET_MENU_ITEM_FILE:
			item->filename = g_strdup(va_arg(ap, const gchar*));

			/* Load the file */
			gkeyfile = g_key_file_new();

			if (!g_key_file_load_from_file(gkeyfile, item->filename, G_KEY_FILE_NONE, NULL))
				return NULL;

			item->name = g_key_file_get_string(gkeyfile, "remmina", "name", NULL);
			item->group = g_key_file_get_string(gkeyfile, "remmina", "group", NULL);
			item->protocol = g_key_file_get_string(gkeyfile, "remmina", "protocol", NULL);
			item->server = g_key_file_get_string(gkeyfile, "remmina", "server", NULL);
			item->ssh_enabled = g_key_file_get_boolean(gkeyfile, "remmina", "ssh_enabled", NULL);

			g_key_file_free(gkeyfile);
			break;

		case REMMINA_APPLET_MENU_ITEM_DISCOVERED:
			item->name = g_strdup(va_arg(ap, const gchar *));
			item->group = g_strdup(_("Discovered"));
			item->protocol = g_strdup("VNC");
			break;

		case REMMINA_APPLET_MENU_ITEM_NEW:
			item->name = g_strdup(_("New Connection"));
			break;
	}

	va_end(ap);

	/* Create the label */
	widget = gtk_label_new(item->name);
	gtk_widget_show(widget);
	gtk_misc_set_alignment(GTK_MISC(widget), 0.0, 0.5);
	gtk_container_add(GTK_CONTAINER(item), widget);

	/* Create the image */
	if (item_type == REMMINA_APPLET_MENU_ITEM_FILE || item_type == REMMINA_APPLET_MENU_ITEM_DISCOVERED)
	{
		if (g_strcmp0(item->protocol, "SFTP") == 0)
		{
			iconname = "remmina-sftp";
		}
		else if (g_strcmp0(item->protocol, "SSH") == 0)
		{
			iconname = "utilities-terminal";
		}
		else if (g_strcmp0(item->protocol, "RDP") == 0)
		{
			iconname = (item->ssh_enabled ? "remmina-rdp-ssh" : "remmina-rdp");
		}
		else if (strncmp (item->protocol, "VNC", 3) == 0)
		{
			iconname = (item->ssh_enabled ? "remmina-vnc-ssh" : "remmina-vnc");
		}
		else if (g_strcmp0(item->protocol, "XDMCP") == 0)
		{
			iconname = (item->ssh_enabled ? "remmina-xdmcp-ssh" : "remmina-xdmcp");
		}
		else if (g_strcmp0(item->protocol, "NX") == 0)
		{
			iconname = "remmina-nx";
		}
		else
		{
			iconname = "remmina";
		}
		widget = gtk_image_new_from_icon_name(iconname, GTK_ICON_SIZE_MENU);
	}
	else
	{
		widget = gtk_image_new_from_stock(GTK_STOCK_JUMP_TO, GTK_ICON_SIZE_MENU);
	}

	gtk_widget_show(widget);
	gtk_image_menu_item_set_image(GTK_IMAGE_MENU_ITEM(item), widget);
	gtk_image_menu_item_set_always_show_image(GTK_IMAGE_MENU_ITEM(item), TRUE);

	if (item->server)
	{
		gtk_widget_set_tooltip_text(GTK_WIDGET(item), item->server);
	}

	return GTK_WIDGET(item);
}

gint remmina_applet_menu_item_compare(gconstpointer a, gconstpointer b, gpointer user_data)
{
	gint cmp;
	RemminaAppletMenuItem* itema;
	RemminaAppletMenuItem* itemb;

	/* Passed in parameters are pointers to pointers */
	itema = REMMINA_APPLET_MENU_ITEM(*((void**) a));
	itemb = REMMINA_APPLET_MENU_ITEM(*((void**) b));

	/* Put ungrouped items to the last */
	if (IS_EMPTY(itema->group) && !IS_EMPTY(itemb->group))
		return 1;
	if (!IS_EMPTY(itema->group) && IS_EMPTY(itemb->group))
		return -1;

	/* Put discovered items the last group */
	if (itema->item_type == REMMINA_APPLET_MENU_ITEM_DISCOVERED && itemb->item_type != REMMINA_APPLET_MENU_ITEM_DISCOVERED)
		return 1;
	if (itema->item_type != REMMINA_APPLET_MENU_ITEM_DISCOVERED && itemb->item_type == REMMINA_APPLET_MENU_ITEM_DISCOVERED)
		return -1;

	if (itema->item_type != REMMINA_APPLET_MENU_ITEM_DISCOVERED && !IS_EMPTY(itema->group))
	{
		cmp = g_strcmp0(itema->group, itemb->group);

		if (cmp != 0)
			return cmp;
	}

	return g_strcmp0(itema->name, itemb->name);
}
