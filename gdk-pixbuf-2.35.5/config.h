/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#define ENABLE_NLS 1

/* Define to 1 to replace the build-time prefix in modules */
/* #undef GDK_PIXBUF_RELOCATABLE */

/* Define if gio can sniff image data */
/* #undef GDK_PIXBUF_USE_GIO_MIME */

/* The prefix for our gettext translation domains. */
#define GETTEXT_PACKAGE "gdk-pixbuf"

/* Define to 1 if you have the `bind_textdomain_codeset' function. */
/* #undef HAVE_BIND_TEXTDOMAIN_CODESET */

/* Define to 1 if you have the Mac OS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the Mac OS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define if you have the iconv() function and it works. */
#define HAVE_ICONV 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 is libjpeg supports progressive JPEG */
/* #undef HAVE_PROGRESSIVE_JPEG */

/* Define to 1 if you have the `setrlimit' function. */
#define HAVE_SETRLIMIT 1

/* Define to 1 if sigsetjmp is available */
#define HAVE_SIGSETJMP 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if sys/sysinfo.h is available */
#define HAVE_SYS_SYSINFO_H 1

/* Define to 1 if sys/systeminfo.h is available */
/* #undef HAVE_SYS_SYSTEMINFO_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Define to 1 if it's a darwin platform */
/* #undef OS_DARWIN */

/* Define to 1 if it's a Linux platform */
#define OS_LINUX 1

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://bugzilla.gnome.org/enter_bug.cgi?product=gdk-pixbuf"

/* Define to the full name of this package. */
#define PACKAGE_NAME "gdk-pixbuf"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "gdk-pixbuf 2.35.5"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "gdk-pixbuf"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.35.5"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if gmodule works and should be used */
/* #undef USE_GMODULE */

/* Whether to load modules via .la files rather than directly */
/* #undef USE_LA_MODULES */

/* Define to 1 if medialib is available and should be used */
/* #undef USE_MEDIALIB */

/* Define to 1 if medialib 2.5 is available */
/* #undef USE_MEDIALIB25 */

/* Define to 1 if XXM is available and should be used */
/* #undef USE_MMX */

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* defines how to decorate public symbols while building */
#define _GDK_PIXBUF_EXTERN __attribute__((visibility("default"))) extern

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */
