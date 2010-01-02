/*
 * Remmina - The GTK+ Remote Desktop Client
 * Copyright (C) 2009 - Vic Lee 
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
 */
 

#ifndef __REMMINAFILEEDIOR_H__
#define __REMMINAFILEEDIOR_H__

G_BEGIN_DECLS

#define REMMINA_TYPE_FILE_EDITOR               (remmina_file_editor_get_type ())
#define REMMINA_FILE_EDITOR(obj)               (G_TYPE_CHECK_INSTANCE_CAST ((obj), REMMINA_TYPE_FILE_EDITOR, RemminaFileEditor))
#define REMMINA_FILE_EDITOR_CLASS(klass)       (G_TYPE_CHECK_CLASS_CAST ((klass), REMMINA_TYPE_FILE_EDITOR, RemminaFileEditorClass))
#define REMMINA_IS_FILE_EDITOR(obj)            (G_TYPE_CHECK_INSTANCE_TYPE ((obj), REMMINA_TYPE_FILE_EDITOR))
#define REMMINA_IS_FILE_EDITOR_CLASS(klass)    (G_TYPE_CHECK_CLASS_TYPE ((klass), REMMINA_TYPE_FILE_EDITOR))
#define REMMINA_FILE_EDITOR_GET_CLASS(obj)     (G_TYPE_INSTANCE_GET_CLASS ((obj), REMMINA_TYPE_FILE_EDITOR, RemminaFileEditorClass))

typedef struct _RemminaFileEditorPriv RemminaFileEditorPriv;

typedef struct _RemminaFileEditor
{
    GtkDialog dialog;

    RemminaFileEditorPriv *priv;
} RemminaFileEditor;

typedef struct _RemminaFileEditorClass
{
    GtkDialogClass parent_class;
} RemminaFileEditorClass;

GType remmina_file_editor_get_type (void) G_GNUC_CONST;

/* Base constructor */
GtkWidget* remmina_file_editor_new_from_file (RemminaFile *remminafile);
/* Create new file */
GtkWidget* remmina_file_editor_new (void);
GtkWidget* remmina_file_editor_new_full (const gchar *server, const gchar *protocol);
GtkWidget* remmina_file_editor_new_copy (const gchar *filename);
/* Open existing file */
GtkWidget* remmina_file_editor_new_from_filename (const gchar *filename);
/* Quick connect */
GtkWidget* remmina_file_editor_new_temp (void);
GtkWidget* remmina_file_editor_new_temp_full (const gchar *server, const gchar *protocol);

G_END_DECLS

#endif  /* __REMMINAFILEEDIOR_H__  */

