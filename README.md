MinGW Libraries
================
This branch contains header files and compiled libraries for my MinGW compiler.
Qt profiles will link to these libs by default, so you can checkout the desired
branch and this branch together to hopefully compile the program.

The dll files in bin are required to run the program (along with the Qt dll's
which are moved using windeployqt, unless you compiled with static Qt).

Arpack-ng is dynamically linked to OpenBLAS.

To compile Vespucci, I use a distribution of Qt with MinGW-w64, which can be found
at http://sourceforge.net/projects/mingwbuilds/files/external-binary-packages/Qt-Builds/


I have compiled all of the following libraries using this version of MinGW-w64

Licenses:
----------
All license files are copied verbatim from the source distributions
GNU General Public License (GPL)
GNU Lesser General Public License (LGPL)
Mozilla Public License (MPL)
BSD License (BSD)
Boost License (Boost)

The following binaries and includes are here:

MLPACK 1.0.10 (http://www.mlpack.org, LGPL v3)
	lib/libmlpack.a
	include/mlpack
	
Armadillo 4.450.4 (http://arma.sourceforge.net, MPL v2)
	lib/libarmadillo.a
	include/armadillo
	include/armadillo_bits
	
OpenBLAS 0.2.12 (2 threads) (http://openblas.net, BSD) 
	lib/libopenblas.a
	lib/libopenblas.dll.a
	lib/libopenblas.dll
	include/cblas.h
	include/f77blas.h
	include/lapacke.h
	include/lapacke_config.h
	include/lapacke_mangling.h
	include/lapacke_utils.h
	include/openblas_config.h

ARPACK-NG 3.1.5 (https://github.com/opencollab/arpack-ng, BSD)
	lib/libarpack.a
	lib/libarpack.la
	lib/libarpack.lai

Boost 1.55, MLPACK requirements(Math (C99), test, random, program options) (http://www.boost.org/, Boost)
	lib/libboost_math_c99_mgw48-mt-1_55.a
	lib/libboost_math_c99_mgw48-mt-d-1_55.a
	lib/libboost_program_options-mgw48-mt-1_55.a
	lib/libboost_program_options-mgw48-mt-d-1_55.a
	lib/libboost_random-mgw48-mt-1_55.a
	lib/libboost_random-mgw48-mt-d-1_55.a
	lib/libboost_unit_test_framework-mgw48-mt-1_55.a
	lib/libboost_unit_test_framework-mgw48-mt-d-1_55.a
	include/boost (this is currently the entirety of the boost library, sorry)
	
libgfortran (From GCC 4.8.2, MinGW-w64) (http://mingw-w64.sourceforge.net/, LGPL v2)
	lib/libgfortran.a

libstdc++ (LGPL v2)
	lib/libstdc++.a
	lib/libstdc++.dll
	bin/libstdc++-6.dll

ZLib 1.2.8 (LGPL v2)
	lib/libz.a
	lib/libz.dll.a
	include/zlib.h

LibXML2 2.9.1 (LGPL v2)
	lib/libxml2.a
	include/libxml

LibIconv 1.14 (LGPL v2)
	lib/libiconv.a
	lib/libiconv.dll.a
	include/libiconv.h

Vespucci-QCP QCustomPlot 1.2.1 (https://github.com/dpfoose/Vespucci-QCP, GPL v3)
	lib/libqcustomplot.a (release)
	lib/libqcustomplotd.a (debug)
	bin/qcustomplot1.dll (release)
	bin/qcustomplotd1.dll (debug)
	include/qcustomplot.h
	
MinGW Runtime Libs (from GCC 4.8.2) (LGPL v2 see also libwinpthreads_license.txt):
	libgcc_s_seh-1.dll //Standard C library
	libstdc++-6.dll //Standard C++ library
	libwinpthread-1.dll //Support for POSIX threads on Windows
