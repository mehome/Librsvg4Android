EXTRA_DIST = \
	README.txt      \
	gdk-pixbuf.sln  \
	gdk-pixbuf-version-paths.props  \
	gdk-pixbuf-build-defines.props  \
	gdk-pixbuf-gen-srcs.props	\
	gdk-pixbuf-install.props	 \
	gdk-pixbuf.vcxproj      \
	gdk-pixbuf.vcxproj.filters      \
	gdk-pixbuf-csource.vcxproj      \
	gdk-pixbuf-csource.vcxproj.filters      \
	gdk-pixbuf-query-loaders.vcxproj	 \
	gdk-pixbuf-query-loaders.vcxproj.filters	 \
	gdk-pixbuf-pixdata.vcxproj      \
	gdk-pixbuf-pixdata.vcxproj.filters      \
	gdk-pixbuf-install.vcxproj		\
	gdk-pixbuf-install.vcxproj.filters

DISTCLEANFILES = $(EXTRA_DIST)

MSVC_VER = 14
MSVC_VER_LONG = 14
MSVC_FORMAT_VER = 12

include $(top_srcdir)/build/Makefile-newvs.am

-include $(top_srcdir)/git.mk
