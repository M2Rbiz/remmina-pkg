#ifndef _LIBVNCSERVER_RFB_RFBCONFIG_H
#define _LIBVNCSERVER_RFB_RFBCONFIG_H 1
 
/* libvncserver/rfb/rfbconfig.h. Generated automatically at end of configure. */
/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* always defined to indicate that i18n is enabled */
#ifndef LIBVNCSERVER_ENABLE_NLS 
#define LIBVNCSERVER_ENABLE_NLS  1 
#endif

/* The gettext package */
#ifndef LIBVNCSERVER_GETTEXT_PACKAGE 
#define LIBVNCSERVER_GETTEXT_PACKAGE  "remmina" 
#endif

/* Define to 1 if you have the <arpa/inet.h> header file. */
#ifndef LIBVNCSERVER_HAVE_ARPA_INET_H 
#define LIBVNCSERVER_HAVE_ARPA_INET_H  1 
#endif

/* Define to 1 if you have the `bind_textdomain_codeset' function. */
#ifndef LIBVNCSERVER_HAVE_BIND_TEXTDOMAIN_CODESET 
#define LIBVNCSERVER_HAVE_BIND_TEXTDOMAIN_CODESET  1 
#endif

/* Define to 1 if you have the `dcgettext' function. */
#ifndef LIBVNCSERVER_HAVE_DCGETTEXT 
#define LIBVNCSERVER_HAVE_DCGETTEXT  1 
#endif

/* Define to 1 if you have the <dlfcn.h> header file. */
#ifndef LIBVNCSERVER_HAVE_DLFCN_H 
#define LIBVNCSERVER_HAVE_DLFCN_H  1 
#endif

/* Define to 1 if you have the <errno.h> header file. */
#ifndef LIBVNCSERVER_HAVE_ERRNO_H 
#define LIBVNCSERVER_HAVE_ERRNO_H  1 
#endif

/* Define to 1 if you have the <fcntl.h> header file. */
#ifndef LIBVNCSERVER_HAVE_FCNTL_H 
#define LIBVNCSERVER_HAVE_FCNTL_H  1 
#endif

/* Define if the GNU gettext() function is already present or preinstalled. */
#ifndef LIBVNCSERVER_HAVE_GETTEXT 
#define LIBVNCSERVER_HAVE_GETTEXT  1 
#endif

/* Define to 1 if you have gtk+-unix-print-2.0. */
#ifndef LIBVNCSERVER_HAVE_GTK_PRINTER 
#define LIBVNCSERVER_HAVE_GTK_PRINTER  1 
#endif

/* Define to 1 if you have the <inttypes.h> header file. */
#ifndef LIBVNCSERVER_HAVE_INTTYPES_H 
#define LIBVNCSERVER_HAVE_INTTYPES_H  1 
#endif

/* Define if your <locale.h> file defines LC_MESSAGES. */
#ifndef LIBVNCSERVER_HAVE_LC_MESSAGES 
#define LIBVNCSERVER_HAVE_LC_MESSAGES  1 
#endif

/* Define to 1 if you have the 'avahi-ui' library (-lavahi-ui). */
#ifndef LIBVNCSERVER_HAVE_LIBAVAHI_UI 
#define LIBVNCSERVER_HAVE_LIBAVAHI_UI  1 
#endif

/* Define to 1 if you have the `gcrypt' library (-lgcrypt). */
#ifndef LIBVNCSERVER_HAVE_LIBGCRYPT 
#define LIBVNCSERVER_HAVE_LIBGCRYPT  1 
#endif

/* Define to 1 if you have the `jpeg' library (-ljpeg). */
#ifndef LIBVNCSERVER_HAVE_LIBJPEG 
#define LIBVNCSERVER_HAVE_LIBJPEG  1 
#endif

/* Define to 1 if you have the `ssh' library (-lssh). */
#ifndef LIBVNCSERVER_HAVE_LIBSSH 
#define LIBVNCSERVER_HAVE_LIBSSH  1 
#endif

/* Define to 1 if you have the 'unique' library (-lunique). */
#ifndef LIBVNCSERVER_HAVE_LIBUNIQUE 
#define LIBVNCSERVER_HAVE_LIBUNIQUE  1 
#endif

/* Define to 1 if you have libvncclient. */
#ifndef LIBVNCSERVER_HAVE_LIBVNCCLIENT 
#define LIBVNCSERVER_HAVE_LIBVNCCLIENT  1 
#endif

/* Define to 1 if you have the 'vte' library (-lvte). */
#ifndef LIBVNCSERVER_HAVE_LIBVTE 
#define LIBVNCSERVER_HAVE_LIBVTE  1 
#endif

/* Define to 1 if you have the `z' library (-lz). */
#ifndef LIBVNCSERVER_HAVE_LIBZ 
#define LIBVNCSERVER_HAVE_LIBZ  1 
#endif

/* Define to 1 if you have the <locale.h> header file. */
#ifndef LIBVNCSERVER_HAVE_LOCALE_H 
#define LIBVNCSERVER_HAVE_LOCALE_H  1 
#endif

/* Define to 1 if you have the <memory.h> header file. */
#ifndef LIBVNCSERVER_HAVE_MEMORY_H 
#define LIBVNCSERVER_HAVE_MEMORY_H  1 
#endif

/* Define to 1 if you have the <netdb.h> header file. */
#ifndef LIBVNCSERVER_HAVE_NETDB_H 
#define LIBVNCSERVER_HAVE_NETDB_H  1 
#endif

/* Define to 1 if you have the <netinet/in.h> header file. */
#ifndef LIBVNCSERVER_HAVE_NETINET_IN_H 
#define LIBVNCSERVER_HAVE_NETINET_IN_H  1 
#endif

/* Define to 1 if you have the `pthread' library (-lpthread). */
#ifndef LIBVNCSERVER_HAVE_PTHREAD 
#define LIBVNCSERVER_HAVE_PTHREAD  1 
#endif

/* Define to 1 if you have the <stdint.h> header file. */
#ifndef LIBVNCSERVER_HAVE_STDINT_H 
#define LIBVNCSERVER_HAVE_STDINT_H  1 
#endif

/* Define to 1 if you have the <stdlib.h> header file. */
#ifndef LIBVNCSERVER_HAVE_STDLIB_H 
#define LIBVNCSERVER_HAVE_STDLIB_H  1 
#endif

/* Define to 1 if you have the <strings.h> header file. */
#ifndef LIBVNCSERVER_HAVE_STRINGS_H 
#define LIBVNCSERVER_HAVE_STRINGS_H  1 
#endif

/* Define to 1 if you have the <string.h> header file. */
#ifndef LIBVNCSERVER_HAVE_STRING_H 
#define LIBVNCSERVER_HAVE_STRING_H  1 
#endif

/* Define to 1 if you have the <sys/socket.h> header file. */
#ifndef LIBVNCSERVER_HAVE_SYS_SOCKET_H 
#define LIBVNCSERVER_HAVE_SYS_SOCKET_H  1 
#endif

/* Define to 1 if you have the <sys/stat.h> header file. */
#ifndef LIBVNCSERVER_HAVE_SYS_STAT_H 
#define LIBVNCSERVER_HAVE_SYS_STAT_H  1 
#endif

/* Define to 1 if you have the <sys/types.h> header file. */
#ifndef LIBVNCSERVER_HAVE_SYS_TYPES_H 
#define LIBVNCSERVER_HAVE_SYS_TYPES_H  1 
#endif

/* Define to 1 if you have the <sys/un.h> header file. */
#ifndef LIBVNCSERVER_HAVE_SYS_UN_H 
#define LIBVNCSERVER_HAVE_SYS_UN_H  1 
#endif

/* Define to 1 if you have the <termios.h> header file. */
#ifndef LIBVNCSERVER_HAVE_TERMIOS_H 
#define LIBVNCSERVER_HAVE_TERMIOS_H  1 
#endif

/* Define to 1 if you have the <unistd.h> header file. */
#ifndef LIBVNCSERVER_HAVE_UNISTD_H 
#define LIBVNCSERVER_HAVE_UNISTD_H  1 
#endif

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#ifndef LIBVNCSERVER_LT_OBJDIR 
#define LIBVNCSERVER_LT_OBJDIR  ".libs/" 
#endif

/* Name of package */
#ifndef LIBVNCSERVER_PACKAGE 
#define LIBVNCSERVER_PACKAGE  "remmina" 
#endif

/* Define to the address where bug reports for this package should be sent. */
#ifndef LIBVNCSERVER_PACKAGE_BUGREPORT 
#define LIBVNCSERVER_PACKAGE_BUGREPORT  "" 
#endif

/* Define to the full name of this package. */
#ifndef LIBVNCSERVER_PACKAGE_NAME 
#define LIBVNCSERVER_PACKAGE_NAME  "remmina" 
#endif

/* Define to the full name and version of this package. */
#ifndef LIBVNCSERVER_PACKAGE_STRING 
#define LIBVNCSERVER_PACKAGE_STRING  "remmina 0.7.3" 
#endif

/* Define to the one symbol short name of this package. */
#ifndef LIBVNCSERVER_PACKAGE_TARNAME 
#define LIBVNCSERVER_PACKAGE_TARNAME  "remmina" 
#endif

/* Define to the home page for this package. */
#ifndef LIBVNCSERVER_PACKAGE_URL 
#define LIBVNCSERVER_PACKAGE_URL  "" 
#endif

/* Define to the version of this package. */
#ifndef LIBVNCSERVER_PACKAGE_VERSION 
#define LIBVNCSERVER_PACKAGE_VERSION  "0.7.3" 
#endif

/* Define to 1 if you have the ANSI C header files. */
#ifndef LIBVNCSERVER_STDC_HEADERS 
#define LIBVNCSERVER_STDC_HEADERS  1 
#endif

/* Version number of package */
#ifndef LIBVNCSERVER_VERSION 
#define LIBVNCSERVER_VERSION  "0.7.3" 
#endif

/* Enable support for gnutls in libvncclient */
#ifndef LIBVNCSERVER_WITH_CLIENT_TLS 
#define LIBVNCSERVER_WITH_CLIENT_TLS  1 
#endif
 
/* once: _LIBVNCSERVER_RFB_RFBCONFIG_H */
#endif
