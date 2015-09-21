// DO NOT EDIT!  Generated automatically from defaults.in.h by Make.
/*

Copyright (C) 1993-2013 John W. Eaton

This file is part of Octave.

Octave is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

Octave is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with Octave; see the file COPYING.  If not, see
<http://www.gnu.org/licenses/>.

*/

#if !defined (octave_defaults_h)
#define octave_defaults_h 1

#include <string>

#include "pathsearch.h"

#ifndef OCTAVE_CANONICAL_HOST_TYPE
#define OCTAVE_CANONICAL_HOST_TYPE "i686-w64-mingw32"
#endif

#ifndef OCTAVE_DEFAULT_PAGER
#define OCTAVE_DEFAULT_PAGER "less"
#endif

#ifndef OCTAVE_ARCHLIBDIR
#define OCTAVE_ARCHLIBDIR "/root/mxe-octave/usr/i686-w64-mingw32/libexec/octave/3.8.1/exec/i686-w64-mingw32"
#endif

#ifndef OCTAVE_BINDIR
#define OCTAVE_BINDIR "/root/mxe-octave/usr/i686-w64-mingw32/bin"
#endif

#ifndef OCTAVE_DATADIR
#define OCTAVE_DATADIR "/root/mxe-octave/usr/i686-w64-mingw32/share"
#endif

#ifndef OCTAVE_DATAROOTDIR
#define OCTAVE_DATAROOTDIR "/root/mxe-octave/usr/i686-w64-mingw32/share"
#endif

#ifndef OCTAVE_DOC_CACHE_FILE
#define OCTAVE_DOC_CACHE_FILE "/root/mxe-octave/usr/i686-w64-mingw32/share/octave/3.8.1/etc/doc-cache"
#endif

#ifndef OCTAVE_TEXI_MACROS_FILE
#define OCTAVE_TEXI_MACROS_FILE "/root/mxe-octave/usr/i686-w64-mingw32/share/octave/3.8.1/etc/macros.texi"
#endif

#ifndef OCTAVE_EXEC_PREFIX
#define OCTAVE_EXEC_PREFIX "/root/mxe-octave/usr/i686-w64-mingw32"
#endif

#ifndef OCTAVE_FCNFILEDIR
#define OCTAVE_FCNFILEDIR "/root/mxe-octave/usr/i686-w64-mingw32/share/octave/3.8.1/m"
#endif

#ifndef OCTAVE_IMAGEDIR
#define OCTAVE_IMAGEDIR "/root/mxe-octave/usr/i686-w64-mingw32/share/octave/3.8.1/imagelib"
#endif

#ifndef OCTAVE_INCLUDEDIR
#define OCTAVE_INCLUDEDIR "/root/mxe-octave/usr/i686-w64-mingw32/include"
#endif

#ifndef OCTAVE_INFODIR
#define OCTAVE_INFODIR "/root/mxe-octave/usr/i686-w64-mingw32/share/info"
#endif

#ifndef OCTAVE_INFOFILE
#define OCTAVE_INFOFILE "/root/mxe-octave/usr/i686-w64-mingw32/share/info/octave.info"
#endif

#ifndef OCTAVE_LIBDIR
#define OCTAVE_LIBDIR "/root/mxe-octave/usr/i686-w64-mingw32/lib"
#endif

#ifndef OCTAVE_LIBEXECDIR
#define OCTAVE_LIBEXECDIR "/root/mxe-octave/usr/i686-w64-mingw32/libexec"
#endif

#ifndef OCTAVE_LIBEXECDIR
#define OCTAVE_LIBEXECDIR "/root/mxe-octave/usr/i686-w64-mingw32/libexec"
#endif

#ifndef OCTAVE_LOCALAPIFCNFILEDIR
#define OCTAVE_LOCALAPIFCNFILEDIR "/root/mxe-octave/usr/i686-w64-mingw32/share/octave/site/api-v49+/m"
#endif

#ifndef OCTAVE_LOCALAPIOCTFILEDIR
#define OCTAVE_LOCALAPIOCTFILEDIR "/root/mxe-octave/usr/i686-w64-mingw32/lib/octave/site/oct/api-v49+/i686-w64-mingw32"
#endif

#ifndef OCTAVE_LOCALARCHLIBDIR
#define OCTAVE_LOCALARCHLIBDIR "/root/mxe-octave/usr/i686-w64-mingw32/libexec/octave/site/exec/i686-w64-mingw32"
#endif

#ifndef OCTAVE_LOCALFCNFILEDIR
#define OCTAVE_LOCALFCNFILEDIR "/root/mxe-octave/usr/i686-w64-mingw32/share/octave/site/m"
#endif

#ifndef OCTAVE_LOCALOCTFILEDIR
#define OCTAVE_LOCALOCTFILEDIR "/root/mxe-octave/usr/i686-w64-mingw32/lib/octave/site/oct/i686-w64-mingw32"
#endif

#ifndef OCTAVE_LOCALSTARTUPFILEDIR
#define OCTAVE_LOCALSTARTUPFILEDIR "/root/mxe-octave/usr/i686-w64-mingw32/share/octave/site/m/startup"
#endif

#ifndef OCTAVE_LOCALAPIARCHLIBDIR
#define OCTAVE_LOCALAPIARCHLIBDIR "/root/mxe-octave/usr/i686-w64-mingw32/libexec/octave/api-v49+/site/exec/i686-w64-mingw32"
#endif

#ifndef OCTAVE_LOCALVERARCHLIBDIR
#define OCTAVE_LOCALVERARCHLIBDIR "/root/mxe-octave/usr/i686-w64-mingw32/libexec/octave/3.8.1/site/exec/i686-w64-mingw32"
#endif

#ifndef OCTAVE_LOCALVERFCNFILEDIR
#define OCTAVE_LOCALVERFCNFILEDIR "/root/mxe-octave/usr/i686-w64-mingw32/share/octave/3.8.1/site/m"
#endif

#ifndef OCTAVE_LOCALVEROCTFILEDIR
#define OCTAVE_LOCALVEROCTFILEDIR "/root/mxe-octave/usr/i686-w64-mingw32/lib/octave/3.8.1/site/oct/i686-w64-mingw32"
#endif

#ifndef OCTAVE_MAN1DIR
#define OCTAVE_MAN1DIR "/root/mxe-octave/usr/i686-w64-mingw32/share/man/man1"
#endif

#ifndef OCTAVE_MAN1EXT
#define OCTAVE_MAN1EXT ".1"
#endif

#ifndef OCTAVE_MANDIR
#define OCTAVE_MANDIR "/root/mxe-octave/usr/i686-w64-mingw32/share/man"
#endif

#ifndef OCTAVE_OCTFILEDIR
#define OCTAVE_OCTFILEDIR "/root/mxe-octave/usr/i686-w64-mingw32/lib/octave/3.8.1/oct/i686-w64-mingw32"
#endif

#ifndef OCTAVE_OCTETCDIR
#define OCTAVE_OCTETCDIR "/root/mxe-octave/usr/i686-w64-mingw32/share/octave/3.8.1/etc"
#endif

#ifndef OCTAVE_OCTLOCALEDIR
#define OCTAVE_OCTLOCALEDIR "/root/mxe-octave/usr/i686-w64-mingw32/share/octave/3.8.1/locale"
#endif

#ifndef OCTAVE_OCTINCLUDEDIR
#define OCTAVE_OCTINCLUDEDIR "/root/mxe-octave/usr/i686-w64-mingw32/include/octave-3.8.1/octave"
#endif

#ifndef OCTAVE_OCTLIBDIR
#define OCTAVE_OCTLIBDIR "/root/mxe-octave/usr/i686-w64-mingw32/lib/octave/3.8.1"
#endif

#ifndef OCTAVE_OCTTESTSDIR
#define OCTAVE_OCTTESTSDIR "/root/mxe-octave/usr/i686-w64-mingw32/share/octave/3.8.1/etc/tests"
#endif

#ifndef OCTAVE_PREFIX
#define OCTAVE_PREFIX "/root/mxe-octave/usr/i686-w64-mingw32"
#endif

#ifndef OCTAVE_STARTUPFILEDIR
#define OCTAVE_STARTUPFILEDIR "/root/mxe-octave/usr/i686-w64-mingw32/share/octave/3.8.1/m/startup"
#endif

#ifndef OCTAVE_RELEASE
#define OCTAVE_RELEASE ""
#endif

extern OCTINTERP_API std::string Voctave_home;

extern OCTINTERP_API std::string Vbin_dir;
extern OCTINTERP_API std::string Vinfo_dir;
extern OCTINTERP_API std::string Vdata_dir;
extern OCTINTERP_API std::string Vlibexec_dir;
extern OCTINTERP_API std::string Varch_lib_dir;
extern OCTINTERP_API std::string Vlocal_arch_lib_dir;
extern OCTINTERP_API std::string Vlocal_ver_arch_lib_dir;

extern OCTINTERP_API std::string Vlocal_ver_oct_file_dir;
extern OCTINTERP_API std::string Vlocal_api_oct_file_dir;
extern OCTINTERP_API std::string Vlocal_oct_file_dir;

extern OCTINTERP_API std::string Vlocal_ver_fcn_file_dir;
extern OCTINTERP_API std::string Vlocal_api_fcn_file_dir;
extern OCTINTERP_API std::string Vlocal_fcn_file_dir;

extern OCTINTERP_API std::string Voct_etc_dir;
extern OCTINTERP_API std::string Voct_locale_dir;

extern OCTINTERP_API std::string Voct_file_dir;
extern OCTINTERP_API std::string Vfcn_file_dir;

extern OCTINTERP_API std::string Vimage_dir;

// Name of the editor to be invoked by the edit_history command.
extern OCTINTERP_API std::string VEDITOR;

extern OCTINTERP_API std::string Vlocal_site_defaults_file;
extern OCTINTERP_API std::string Vsite_defaults_file;

extern OCTINTERP_API std::string Vbuilt_in_docstrings_file;

// Name of the FFTW wisdom program.
extern OCTINTERP_API std::string Vfftw_wisdom_program;

extern OCTINTERP_API std::string subst_octave_home (const std::string&);

extern OCTINTERP_API void install_defaults (void);

extern OCTINTERP_API void
set_exec_path (const std::string& path = std::string ());

extern OCTINTERP_API void
set_image_path (const std::string& path = std::string ());

#endif
