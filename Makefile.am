ACLOCAL_AMFLAGS = -I m4

LIBDAEMONIZE_VERSION=1:0:0

lib_LTLIBRARIES = libdaemonize-1.0.la
libdaemonize_1_0_la_SOURCES = \
	src/daemonize/logger.cpp \
	src/daemonize/daemonizer.cpp \
	src/daemonize/daemon.cpp
libdaemonize_1_0_la_LDFLAGS = -version-info $(LIBDAEMONIZE_VERSION)
libdaemonize_1_0_includedir = $(includedir)/libdaemonize-1.0/libdaemonize
libdaemonize_1_0_include_HEADERS = \
	src/daemonize/logger.cpp \
	src/daemonize/daemonizer.hpp \
	src/daemonize/daemon.hpp

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = libdaemonize-1.0.pc
