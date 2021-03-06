##
## Copyright (C) 2008 Sourcefire Inc., All Rights Reserved.
##
## Please see the LICENSE file distributed with this source
## code archive for information covering the modification and
## redistribution of this file and binaries built from it.
##

AC_PREREQ([2.61])
m4_include([common_m4/versions.m4])
AC_INIT([yaraNugget], YARA_NUGGET_VERSION_NUMBER, [https://sourceforge.net/apps/trac/razorbacktm/], [yaraNugget])
AC_CONFIG_AUX_DIR([.])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_SRCDIR([src/yara.c])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([foreign no-define tar-ustar])

# Pull in the checks for the build tools.
m4_include([common_m4/build_tools.m4])

# Pull in the platform specific build/configure environment options.
m4_include([common_m4/platform_flags.m4])

# Pull in the standard options for all components
m4_include([common_m4/nugget_options.m4])

# Pull in the library requirements for a simple .so loadable nugget.
m4_include([common_m4/nugget_simple_deps.m4])

AC_CONFIG_SUBDIRS([libyara])

LIBS="../libyara/libyara.la $LIBS"
CFLAGS="-fms-extensions $CFLAGS"
NOT_PEDANTIC="libyara"


# Pull in the standard header and function checks.
m4_include([common_m4/standard_headers_functions.m4])

# Pull in the compiler customisation options for different compilers.
m4_include([common_m4/compiler_options.m4])

# Pull in the standard compiler and linker flags.
m4_include([common_m4/cflags.m4])

# Pulling configuration for standard nugget substituions.
m4_include([common_m4/nugget_subs.m4])


AC_CONFIG_FILES([ \
Makefile \
m4/Makefile \
src/Makefile \
etc/Makefile \
etc/yara.conf.sample \
etc/yara/Makefile \
])
AC_OUTPUT
