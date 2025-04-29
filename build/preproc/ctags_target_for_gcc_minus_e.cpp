# 0 "C:\\Users\\kavee\\Desktop\\MECH3890\\VSCODE\\sensor\\build\\sketch\\sensor.ino.cpp"
# 1 "c:\\Users\\kavee\\Desktop\\MECH3890\\VSCODE\\sensor//"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "C:\\Users\\kavee\\Desktop\\MECH3890\\VSCODE\\sensor\\build\\sketch\\sensor.ino.cpp"
# 1 "C:\\Users\\kavee\\AppData\\Local\\Arduino15\\packages\\esp32\\hardware\\esp32\\3.1.1\\cores\\esp32/Arduino.h" 1
/*
 Arduino.h - Main include file for the Arduino SDK
 Copyright (c) 2005-2013 Arduino Team.  All right reserved.

 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.

 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.

 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */




# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stdbool.h" 1 3 4

# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stdbool.h" 3 4
/* Copyright (C) 1998-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.16  Boolean type and values  <stdbool.h>
 */
# 43 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stdbool.h" 3 4
/* Supporting _Bool in C++ is a GCC extension.  */




/* Signal that all the definitions are present.  */
# 24 "C:\\Users\\kavee\\AppData\\Local\\Arduino15\\packages\\esp32\\hardware\\esp32\\3.1.1\\cores\\esp32/Arduino.h" 2
# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stdint.h" 1 3 4
# 9 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stdint.h" 3 4
# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/stdint.h" 1 3 4
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */




# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/machine/_default_types.h" 1 3 4
/*
 *  $Id$
 */




# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/features.h" 1 3 4
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2014.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */





extern "C" {


# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/_newlib_version.h" 1 3 4
/* _newlib_version.h.  Generated from _newlib_version.hin by configure.  */
/* Version macros for internal and downstream use. */
# 29 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/features.h" 2 3 4

/* Macro to test version of GCC.  Returns 0 for non-GCC or too old GCC. */
# 39 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/features.h" 3 4
/* Version with trailing underscores for BSD compatibility. */



/*
 * Feature test macros control which symbols are exposed by the system
 * headers.  Any of these must be defined before including any headers.
 *
 * __STRICT_ANSI__ (defined by gcc -ansi, -std=c90, -std=c99, or -std=c11)
 *	ISO C
 *
 * _POSIX_SOURCE (deprecated by _POSIX_C_SOURCE=1)
 * _POSIX_C_SOURCE >= 1
 * 	POSIX.1-1990
 *
 * _POSIX_C_SOURCE >= 2
 * 	POSIX.2-1992
 *
 * _POSIX_C_SOURCE >= 199309L
 * 	POSIX.1b-1993 Real-time extensions
 *
 * _POSIX_C_SOURCE >= 199506L
 * 	POSIX.1c-1995 Threads extensions
 *
 * _POSIX_C_SOURCE >= 200112L
 * 	POSIX.1-2001 and C99
 *
 * _POSIX_C_SOURCE >= 200809L
 * 	POSIX.1-2008
 *
 * _XOPEN_SOURCE
 *	POSIX.1-1990 and XPG4
 *
 * _XOPEN_SOURCE_EXTENDED
 *	SUSv1 (POSIX.2-1992 plus XPG4v2)
 *
 * _XOPEN_SOURCE >= 500
 *	SUSv2 (POSIX.1c-1995 plus XSI)
 *
 * _XOPEN_SOURCE >= 600
 *	SUSv3 (POSIX.1-2001 plus XSI) and C99
 *
 * _XOPEN_SOURCE >= 700
 *	SUSv4 (POSIX.1-2008 plus XSI)
 *
 * _ISOC99_SOURCE or gcc -std=c99 or g++
 * 	ISO C99
 *
 * _ISOC11_SOURCE or gcc -std=c11 or g++ -std=c++11
 * 	ISO C11
 *
 * _ATFILE_SOURCE (implied by _POSIX_C_SOURCE >= 200809L)
 *	"at" functions
 *
 * _LARGEFILE_SOURCE (deprecated by _XOPEN_SOURCE >= 500)
 *	fseeko, ftello
 *
 * _GNU_SOURCE
 * 	All of the above plus GNU extensions
 *
 * _BSD_SOURCE (deprecated by _DEFAULT_SOURCE)
 * _SVID_SOURCE (deprecated by _DEFAULT_SOURCE)
 * _DEFAULT_SOURCE (or none of the above)
 * 	POSIX-1.2008 with BSD and SVr4 extensions
 *
 * _FORTIFY_SOURCE = 1 or 2
 * 	Object Size Checking function wrappers
 */
# 162 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/features.h" 3 4
/*
 * The following private macros are used throughout the headers to control
 * which symbols should be exposed.  They are for internal use only, as
 * indicated by the leading double underscore, and must never be used outside
 * of these headers.
 *
 * __POSIX_VISIBLE
 * 	any version of POSIX.1; enabled by default, or with _POSIX_SOURCE,
 * 	any value of _POSIX_C_SOURCE, or _XOPEN_SOURCE >= 500.
 *
 * __POSIX_VISIBLE >= 2
 * 	POSIX.2-1992; enabled by default, with _POSIX_C_SOURCE >= 2,
 * 	or _XOPEN_SOURCE >= 500.
 *
 * __POSIX_VISIBLE >= 199309
 * 	POSIX.1b-1993; enabled by default, with _POSIX_C_SOURCE >= 199309L,
 * 	or _XOPEN_SOURCE >= 500.
 *
 * __POSIX_VISIBLE >= 199506
 * 	POSIX.1c-1995; enabled by default, with _POSIX_C_SOURCE >= 199506L,
 * 	or _XOPEN_SOURCE >= 500.
 *
 * __POSIX_VISIBLE >= 200112
 * 	POSIX.1-2001; enabled by default, with _POSIX_C_SOURCE >= 200112L,
 * 	or _XOPEN_SOURCE >= 600.
 *
 * __POSIX_VISIBLE >= 200809
 * 	POSIX.1-2008; enabled by default, with _POSIX_C_SOURCE >= 200809L,
 * 	or _XOPEN_SOURCE >= 700.
 *
 * __XSI_VISIBLE
 *	XPG4 XSI extensions; enabled with any version of _XOPEN_SOURCE.
 *
 * __XSI_VISIBLE >= 4
 *	SUSv1 XSI extensions; enabled with both _XOPEN_SOURCE and
 * 	_XOPEN_SOURCE_EXTENDED together.
 *
 * __XSI_VISIBLE >= 500
 *	SUSv2 XSI extensions; enabled with _XOPEN_SOURCE >= 500.
 *
 * __XSI_VISIBLE >= 600
 *	SUSv3 XSI extensions; enabled with _XOPEN_SOURCE >= 600.
 *
 * __XSI_VISIBLE >= 700
 *	SUSv4 XSI extensions; enabled with _XOPEN_SOURCE >= 700.
 *
 * __ISO_C_VISIBLE >= 1999
 * 	ISO C99; enabled with gcc -std=c99 or newer (on by default since GCC 5),
 * 	any version of C++, or with _ISOC99_SOURCE, _POSIX_C_SOURCE >= 200112L,
 * 	or _XOPEN_SOURCE >= 600.
 *
 * __ISO_C_VISIBLE >= 2011
 * 	ISO C11; enabled with gcc -std=c11 or newer (on by default since GCC 5),
 * 	g++ -std=c++11 or newer (on by default since GCC 6), or with
 * 	_ISOC11_SOURCE.
 *
 * __ATFILE_VISIBLE
 *	"at" functions; enabled by default, with _ATFILE_SOURCE,
 * 	_POSIX_C_SOURCE >= 200809L, or _XOPEN_SOURCE >= 700.
 *
 * __LARGEFILE_VISIBLE
 *	fseeko, ftello; enabled with _LARGEFILE_SOURCE or _XOPEN_SOURCE >= 500.
 *
 * __BSD_VISIBLE
 * 	BSD extensions; enabled by default, or with _BSD_SOURCE.
 *
 * __SVID_VISIBLE
 * 	SVr4 extensions; enabled by default, or with _SVID_SOURCE.
 *
 * __MISC_VISIBLE
 * 	Extensions found in both BSD and SVr4 (shorthand for
 * 	(__BSD_VISIBLE || __SVID_VISIBLE)), or newlib-specific
 * 	extensions; enabled by default.
 *
 * __GNU_VISIBLE
 * 	GNU extensions; enabled with _GNU_SOURCE.
 *
 * __SSP_FORTIFY_LEVEL
 * 	Object Size Checking; defined to 0 (off), 1, or 2.
 *
 * In all cases above, "enabled by default" means either by defining
 * _DEFAULT_SOURCE, or by not defining any of the public feature test macros.
 */
# 334 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/features.h" 3 4
/* RTEMS adheres to POSIX -- 1003.1b with some features from annexes.  */
# 391 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/features.h" 3 4
/* XMK loosely adheres to POSIX -- 1003.1 */
# 535 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/features.h" 3 4
/* Espressif-specific */






/* ~Espressif-specific */


}
# 9 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/machine/_default_types.h" 2 3 4

/*
 * Guess on types by examining *_MIN / *_MAX defines.
 */

/* GCC >= 3.3.0 has __<val>__ implicitly defined. */







/* Check if "long long" is 64bit wide */
/* Modern GCCs provide __LONG_LONG_MAX__, SUSv3 wants LLONG_MAX */





/* Check if "long" is 64bit or 32bit wide */







extern "C" {



typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 55 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/machine/_default_types.h" 3 4
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 77 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/machine/_default_types.h" 3 4
typedef long int __int32_t;

typedef long unsigned int __uint32_t;
# 103 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/machine/_default_types.h" 3 4
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
# 134 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/machine/_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 160 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/machine/_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 182 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/machine/_default_types.h" 3 4
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;
# 200 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/machine/_default_types.h" 3 4
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
# 214 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/machine/_default_types.h" 3 4
typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 247 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/machine/_default_types.h" 3 4
}
# 13 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/stdint.h" 2 3 4
# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/_intsup.h" 1 3 4
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */




# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/features.h" 1 3 4
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2014.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */
# 13 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/_intsup.h" 2 3 4


/* gcc > 3.2 implicitly defines the values we are interested */






/* Determine how intptr_t and intN_t fastN_t and leastN_t are defined by gcc
   for this target.  This is used to determine the correct printf() constant in
   inttypes.h and other  constants in stdint.h.
   So we end up with
   ?(signed|unsigned) char == 0
   ?(signed|unsigned) short == 1
   ?(signed|unsigned) int == 2
   ?(signed|unsigned) short int == 3
   ?(signed|unsigned) long == 4
   ?(signed|unsigned) long int == 6
   ?(signed|unsigned) long long == 8
   ?(signed|unsigned) long long int == 10
 */
       
       
       
       
       
       
       
       
# 190 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/_intsup.h" 3 4
       
       
       
       
       
       
       
       
# 14 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/stdint.h" 2 3 4
# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/_stdint.h" 1 3 4
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */




# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/machine/_default_types.h" 1 3 4
/*
 *  $Id$
 */
# 13 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/_stdint.h" 2 3 4


extern "C" {




typedef __int8_t int8_t ;



typedef __uint8_t uint8_t ;







typedef __int16_t int16_t ;



typedef __uint16_t uint16_t ;







typedef __int32_t int32_t ;



typedef __uint32_t uint32_t ;







typedef __int64_t int64_t ;



typedef __uint64_t uint64_t ;






typedef __intmax_t intmax_t;




typedef __uintmax_t uintmax_t;




typedef __intptr_t intptr_t;




typedef __uintptr_t uintptr_t;




}
# 15 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/stdint.h" 2 3 4


extern "C" {



typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;




typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;




typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;




typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;



/*
 * Fastest minimum-width integer types
 *
 * Assume int to be the fastest type for all types with a width 
 * less than __INT_MAX__ rsp. INT_MAX
 */

  typedef int int_fast8_t;
  typedef unsigned int uint_fast8_t;
# 61 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/stdint.h" 3 4
  typedef int int_fast16_t;
  typedef unsigned int uint_fast16_t;
# 71 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/stdint.h" 3 4
  typedef int int_fast32_t;
  typedef unsigned int uint_fast32_t;
# 81 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/stdint.h" 3 4
  typedef long long int int_fast64_t;
  typedef long long unsigned int uint_fast64_t;







/*
 * Fall back to [u]int_least<N>_t for [u]int_fast<N>_t types
 * not having been defined, yet.
 * Leave undefined, if [u]int_least<N>_t should not be available.
 */
# 149 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/stdint.h" 3 4
/* Limits of Specified-Width Integer Types */
# 341 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/stdint.h" 3 4
/* This must match size_t in stddef.h, currently long unsigned int */






/* This must match sig_atomic_t in <signal.h> (currently int) */



/* This must match ptrdiff_t  in <stddef.h> (currently long int) */







/* This must match definition in <wchar.h> */
# 371 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/stdint.h" 3 4
/* This must match definition in <wchar.h> */
# 382 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/stdint.h" 3 4
/* wint_t is unsigned int on almost all GCC targets.  */
# 394 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/stdint.h" 3 4
/** Macros for minimum-width integer constant expressions */
# 447 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/stdint.h" 3 4
/** Macros for greatest-width integer constant expression */
# 463 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/stdint.h" 3 4
}
# 10 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stdint.h" 2 3 4
# 25 "C:\\Users\\kavee\\AppData\\Local\\Arduino15\\packages\\esp32\\hardware\\esp32\\3.1.1\\cores\\esp32/Arduino.h" 2
# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stdarg.h" 1 3 4
/* Copyright (C) 1989-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.15  Variable arguments  <stdarg.h>
 */
# 36 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stdarg.h" 3 4
/* Define __gnuc_va_list.  */



typedef __builtin_va_list __gnuc_va_list;


/* Define the standard macros for the user,
   if this invocation was from the user program.  */
# 60 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stdarg.h" 3 4
/* Define va_list, if desired, from __gnuc_va_list. */
/* We deliberately do not define va_list when called from
   stdio.h, because ANSI C says that stdio.h is not supposed to define
   va_list.  stdio.h needs to have access to that data type, 
   but must not use that name.  It should use the name __gnuc_va_list,
   which is safe because it is reserved for the implementation.  */
# 90 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stdarg.h" 3 4
/* The macro _VA_LIST_ is the same thing used by this file in Ultrix.
   But on BSD NET2 we must not test or define or undef it.
   (Note that the comments in NET 2's ansi.h
   are incorrect for _VA_LIST_--see stdio.h!)  */

/* The macro _VA_LIST_DEFINED is used in Windows NT 3.5  */

/* The macro _VA_LIST is used in SCO Unix 3.2.  */

/* The macro _VA_LIST_T_H is used in the Bull dpx2  */

/* The macro __va_list__ is used by BeOS.  */

typedef __gnuc_va_list va_list;
# 26 "C:\\Users\\kavee\\AppData\\Local\\Arduino15\\packages\\esp32\\hardware\\esp32\\3.1.1\\cores\\esp32/Arduino.h" 2
# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */





/* snaroff@next.com says the NeXT needs this.  */




/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */
# 86 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 111 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 145 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 157 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 214 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
typedef unsigned int size_t;
# 241 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 284 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
/* On BSD/386 1.1, at least, machine/ansi.h defines _BSD_WCHAR_T_
   instead of _WCHAR_T_, and _BSD_RUNE_T_ (which, unlike the other
   symbols in the _FOO_T_ family, stays defined even after its
   corresponding type is defined).  If we define wchar_t, then we
   must undef _WCHAR_T_; for BSD/386 1.1 (and perhaps others), if
   we undef _WCHAR_T_, then we must also define rune_t, since 
   headers like runetype.h assume that if machine/ansi.h is included,
   and _BSD_WCHAR_T_ is not defined, then rune_t is available.
   machine/ansi.h says, "Note that _WCHAR_T_ and _RUNE_T_ must be of
   the same type." */
# 311 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
/* FreeBSD 5 can't be handled well using "traditional" logic above
   since it no longer defines _BSD_RUNE_T_ yet still desires to export
   rune_t in some cases... */
# 396 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
/* A null pointer constant.  */
# 414 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */







/* Type whose alignment is supported in every context and is at least
   as great as that of any standard type not using alignment
   specifiers.  */
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
  /* _Float128 is defined as a basic type, so max_align_t must be
     sufficiently aligned for it.  This code must work in C++, so we
     use __float128 here; that is only available on some
     architectures, but only on i386 is extra alignment needed for
     __float128.  */



} max_align_t;






  typedef decltype(nullptr) nullptr_t;
# 27 "C:\\Users\\kavee\\AppData\\Local\\Arduino15\\packages\\esp32\\hardware\\esp32\\3.1.1\\cores\\esp32/Arduino.h" 2
# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/stdio.h" 1 3
/*
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * and/or other materials related to such
 * distribution and use acknowledge that the software was developed
 * by the University of California, Berkeley.  The name of the
 * University may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 *	@(#)stdio.h	5.3 (Berkeley) 3/15/86
 */

/*
 * NB: to fit things in six character monocase externals, the
 * stdio code uses the prefix `__s' for stdio objects, typically
 * followed by a three-character attempt at a mnemonic.
 */




# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */




# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/newlib.h" 1 3
/* newlib.h.  Generated from newlib.hin by configure.  */
/* newlib.hin.  Generated from configure.ac by autoheader.  */

/* NB: The contents are filtered before being installed. */




/* Newlib version */
# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/_newlib_version.h" 1 3
/* _newlib_version.h.  Generated from _newlib_version.hin by configure.  */
/* Version macros for internal and downstream use. */
# 11 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/newlib.h" 2 3

/* Define to 1 if the system has the type `long double'. */

/* Define to the address where bug reports for this package should be sent. */

/* Define to the full name of this package. */

/* Define to the full name and version of this package. */

/* Define to the one symbol short name of this package. */

/* Define to the home page for this package. */

/* Define to the version of this package. */

/* If atexit() may dynamically allocate space for cleanup functions. */


/* EL/IX level */
/* #undef _ELIX_LEVEL */

/* Define if fseek functions support seek optimization. */


/* Define if ivo supported in streamio. */


/* Define if compiler supports -fno-tree-loop-distribute-patterns. */


/* Define if the linker supports .preinit_array/.init_array/.fini_array
   sections. */


/* Define if the platform supports long double type. */


/* ICONV enabled. */


/* Enable ICONV external CCS files loading capabilities. */
/* #undef _ICONV_ENABLE_EXTERNAL_CCS */

/* Support big5 input encoding. */
/* #undef _ICONV_FROM_ENCODING_BIG5 */

/* Support cp775 input encoding. */
/* #undef _ICONV_FROM_ENCODING_CP775 */

/* Support cp850 input encoding. */
/* #undef _ICONV_FROM_ENCODING_CP850 */

/* Support cp852 input encoding. */
/* #undef _ICONV_FROM_ENCODING_CP852 */

/* Support cp855 input encoding. */
/* #undef _ICONV_FROM_ENCODING_CP855 */

/* Support cp866 input encoding. */
/* #undef _ICONV_FROM_ENCODING_CP866 */

/* Support euc_jp input encoding. */
/* #undef _ICONV_FROM_ENCODING_EUC_JP */

/* Support euc_kr input encoding. */
/* #undef _ICONV_FROM_ENCODING_EUC_KR */

/* Support euc_tw input encoding. */
/* #undef _ICONV_FROM_ENCODING_EUC_TW */

/* Support iso_8859_1 input encoding. */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_1 */

/* Support iso_8859_10 input encoding. */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_10 */

/* Support iso_8859_11 input encoding. */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_11 */

/* Support iso_8859_13 input encoding. */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_13 */

/* Support iso_8859_14 input encoding. */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_14 */

/* Support iso_8859_15 input encoding. */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_15 */

/* Support iso_8859_2 input encoding. */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_2 */

/* Support iso_8859_3 input encoding. */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_3 */

/* Support iso_8859_4 input encoding. */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_4 */

/* Support iso_8859_5 input encoding. */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_5 */

/* Support iso_8859_6 input encoding. */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_6 */

/* Support iso_8859_7 input encoding. */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_7 */

/* Support iso_8859_8 input encoding. */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_8 */

/* Support iso_8859_9 input encoding. */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_9 */

/* Support iso_ir_111 input encoding. */
/* #undef _ICONV_FROM_ENCODING_ISO_IR_111 */

/* Support koi8_r input encoding. */
/* #undef _ICONV_FROM_ENCODING_KOI8_R */

/* Support koi8_ru input encoding. */
/* #undef _ICONV_FROM_ENCODING_KOI8_RU */

/* Support koi8_u input encoding. */
/* #undef _ICONV_FROM_ENCODING_KOI8_U */

/* Support koi8_uni input encoding. */
/* #undef _ICONV_FROM_ENCODING_KOI8_UNI */

/* Support ucs_2 input encoding. */
/* #undef _ICONV_FROM_ENCODING_UCS_2 */

/* Support ucs_2be input encoding. */
/* #undef _ICONV_FROM_ENCODING_UCS_2BE */

/* Support ucs_2le input encoding. */
/* #undef _ICONV_FROM_ENCODING_UCS_2LE */

/* Support ucs_2_internal input encoding. */
/* #undef _ICONV_FROM_ENCODING_UCS_2_INTERNAL */

/* Support ucs_4 input encoding. */
/* #undef _ICONV_FROM_ENCODING_UCS_4 */

/* Support ucs_4be input encoding. */
/* #undef _ICONV_FROM_ENCODING_UCS_4BE */

/* Support ucs_4le input encoding. */
/* #undef _ICONV_FROM_ENCODING_UCS_4LE */

/* Support ucs_4_internal input encoding. */
/* #undef _ICONV_FROM_ENCODING_UCS_4_INTERNAL */

/* Support us_ascii input encoding. */
/* #undef _ICONV_FROM_ENCODING_US_ASCII */

/* Support utf_16 input encoding. */
/* #undef _ICONV_FROM_ENCODING_UTF_16 */

/* Support utf_16be input encoding. */
/* #undef _ICONV_FROM_ENCODING_UTF_16BE */

/* Support utf_16le input encoding. */
/* #undef _ICONV_FROM_ENCODING_UTF_16LE */

/* Support utf_8 input encoding. */
/* #undef _ICONV_FROM_ENCODING_UTF_8 */

/* Support win_1250 input encoding. */
/* #undef _ICONV_FROM_ENCODING_WIN_1250 */

/* Support win_1251 input encoding. */
/* #undef _ICONV_FROM_ENCODING_WIN_1251 */

/* Support win_1252 input encoding. */
/* #undef _ICONV_FROM_ENCODING_WIN_1252 */

/* Support win_1253 input encoding. */
/* #undef _ICONV_FROM_ENCODING_WIN_1253 */

/* Support win_1254 input encoding. */
/* #undef _ICONV_FROM_ENCODING_WIN_1254 */

/* Support win_1255 input encoding. */
/* #undef _ICONV_FROM_ENCODING_WIN_1255 */

/* Support win_1256 input encoding. */
/* #undef _ICONV_FROM_ENCODING_WIN_1256 */

/* Support win_1257 input encoding. */
/* #undef _ICONV_FROM_ENCODING_WIN_1257 */

/* Support win_1258 input encoding. */
/* #undef _ICONV_FROM_ENCODING_WIN_1258 */

/* Support big5 output encoding. */
/* #undef _ICONV_TO_ENCODING_BIG5 */

/* Support cp775 output encoding. */
/* #undef _ICONV_TO_ENCODING_CP775 */

/* Support cp850 output encoding. */
/* #undef _ICONV_TO_ENCODING_CP850 */

/* Support cp852 output encoding. */
/* #undef _ICONV_TO_ENCODING_CP852 */

/* Support cp855 output encoding. */
/* #undef _ICONV_TO_ENCODING_CP855 */

/* Support cp866 output encoding. */
/* #undef _ICONV_TO_ENCODING_CP866 */

/* Support euc_jp output encoding. */
/* #undef _ICONV_TO_ENCODING_EUC_JP */

/* Support euc_kr output encoding. */
/* #undef _ICONV_TO_ENCODING_EUC_KR */

/* Support euc_tw output encoding. */
/* #undef _ICONV_TO_ENCODING_EUC_TW */

/* Support iso_8859_1 output encoding. */
/* #undef _ICONV_TO_ENCODING_ISO_8859_1 */

/* Support iso_8859_10 output encoding. */
/* #undef _ICONV_TO_ENCODING_ISO_8859_10 */

/* Support iso_8859_11 output encoding. */
/* #undef _ICONV_TO_ENCODING_ISO_8859_11 */

/* Support iso_8859_13 output encoding. */
/* #undef _ICONV_TO_ENCODING_ISO_8859_13 */

/* Support iso_8859_14 output encoding. */
/* #undef _ICONV_TO_ENCODING_ISO_8859_14 */

/* Support iso_8859_15 output encoding. */
/* #undef _ICONV_TO_ENCODING_ISO_8859_15 */

/* Support iso_8859_2 output encoding. */
/* #undef _ICONV_TO_ENCODING_ISO_8859_2 */

/* Support iso_8859_3 output encoding. */
/* #undef _ICONV_TO_ENCODING_ISO_8859_3 */

/* Support iso_8859_4 output encoding. */
/* #undef _ICONV_TO_ENCODING_ISO_8859_4 */

/* Support iso_8859_5 output encoding. */
/* #undef _ICONV_TO_ENCODING_ISO_8859_5 */

/* Support iso_8859_6 output encoding. */
/* #undef _ICONV_TO_ENCODING_ISO_8859_6 */

/* Support iso_8859_7 output encoding. */
/* #undef _ICONV_TO_ENCODING_ISO_8859_7 */

/* Support iso_8859_8 output encoding. */
/* #undef _ICONV_TO_ENCODING_ISO_8859_8 */

/* Support iso_8859_9 output encoding. */
/* #undef _ICONV_TO_ENCODING_ISO_8859_9 */

/* Support iso_ir_111 output encoding. */
/* #undef _ICONV_TO_ENCODING_ISO_IR_111 */

/* Support koi8_r output encoding. */
/* #undef _ICONV_TO_ENCODING_KOI8_R */

/* Support koi8_ru output encoding. */
/* #undef _ICONV_TO_ENCODING_KOI8_RU */

/* Support koi8_u output encoding. */
/* #undef _ICONV_TO_ENCODING_KOI8_U */

/* Support koi8_uni output encoding. */
/* #undef _ICONV_TO_ENCODING_KOI8_UNI */

/* Support ucs_2 output encoding. */
/* #undef _ICONV_TO_ENCODING_UCS_2 */

/* Support ucs_2be output encoding. */
/* #undef _ICONV_TO_ENCODING_UCS_2BE */

/* Support ucs_2le output encoding. */
/* #undef _ICONV_TO_ENCODING_UCS_2LE */

/* Support ucs_2_internal output encoding. */
/* #undef _ICONV_TO_ENCODING_UCS_2_INTERNAL */

/* Support ucs_4 output encoding. */
/* #undef _ICONV_TO_ENCODING_UCS_4 */

/* Support ucs_4be output encoding. */
/* #undef _ICONV_TO_ENCODING_UCS_4BE */

/* Support ucs_4le output encoding. */
/* #undef _ICONV_TO_ENCODING_UCS_4LE */

/* Support ucs_4_internal output encoding. */
/* #undef _ICONV_TO_ENCODING_UCS_4_INTERNAL */

/* Support us_ascii output encoding. */
/* #undef _ICONV_TO_ENCODING_US_ASCII */

/* Support utf_16 output encoding. */
/* #undef _ICONV_TO_ENCODING_UTF_16 */

/* Support utf_16be output encoding. */
/* #undef _ICONV_TO_ENCODING_UTF_16BE */

/* Support utf_16le output encoding. */
/* #undef _ICONV_TO_ENCODING_UTF_16LE */

/* Support utf_8 output encoding. */
/* #undef _ICONV_TO_ENCODING_UTF_8 */

/* Support win_1250 output encoding. */
/* #undef _ICONV_TO_ENCODING_WIN_1250 */

/* Support win_1251 output encoding. */
/* #undef _ICONV_TO_ENCODING_WIN_1251 */

/* Support win_1252 output encoding. */
/* #undef _ICONV_TO_ENCODING_WIN_1252 */

/* Support win_1253 output encoding. */
/* #undef _ICONV_TO_ENCODING_WIN_1253 */

/* Support win_1254 output encoding. */
/* #undef _ICONV_TO_ENCODING_WIN_1254 */

/* Support win_1255 output encoding. */
/* #undef _ICONV_TO_ENCODING_WIN_1255 */

/* Support win_1256 output encoding. */
/* #undef _ICONV_TO_ENCODING_WIN_1256 */

/* Support win_1257 output encoding. */
/* #undef _ICONV_TO_ENCODING_WIN_1257 */

/* Support win_1258 output encoding. */
/* #undef _ICONV_TO_ENCODING_WIN_1258 */

/* Define if the platform long double type is equal to double. */
/* #undef _LDBL_EQ_DBL */

/* Define if lite version of exit supported. */
/* #undef _LITE_EXIT */

/* Multibyte supported. */
/* #undef _MB_CAPABLE */

/* Multibyte max length. */


/* Define if small footprint nano-formatted-IO implementation used. */
/* #undef _NANO_FORMATTED_IO */

/* nano version of malloc is used. */


/* Verify _REENT_CHECK macros allocate memory successfully. */


/* Define if using retargetable functions for default lock routines. */


/* Define if unbuffered stream file optimization is supported. */


/* Enable C99 formats support (e.g. %a, %zu, ...) in IO functions like
   printf/scanf. */


/* Define to enable long double type support in IO functions like
   printf/scanf. */
/* #undef _WANT_IO_LONG_DOUBLE */

/* Define to enable long long type support in IO functions like printf/scanf.
   */


/* Positional argument support in printf functions enabled. */


/* Define to enable backward binary compatibility for struct _reent. */


/* Optional reentrant struct support. Used mostly on platforms with very
   restricted storage. */


/* Define to enable thread-local storage objects as a replacment for struct
   _reent members. */
/* #undef _WANT_REENT_THREAD_LOCAL */

/* Register application finalization function using atexit. */
/* #undef _WANT_REGISTER_FINI */

/* Define if using gdtoa rather than legacy ldtoa. */


/* Define to use type long for time_t. */
/* #undef _WANT_USE_LONG_TIME_T */

/* Define if wide char orientation is supported. */
/* #undef _WIDE_ORIENT */
# 11 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/_ansi.h" 2 3
# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/config.h" 1 3



# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/machine/ieeefp.h" 1 3



/* This file can define macros to choose variations of the IEEE float
   format:

   _FLT_LARGEST_EXPONENT_IS_NORMAL

	Defined if the float format uses the largest exponent for finite
	numbers rather than NaN and infinity representations.  Such a
	format cannot represent NaNs or infinities at all, but it's FLT_MAX
	is twice the IEEE value.

   _FLT_NO_DENORMALS

	Defined if the float format does not support IEEE denormals.  Every
	float with a zero exponent is taken to be a zero representation.
 
   ??? At the moment, there are no equivalent macros above for doubles and
   the macros are not fully supported by --enable-newlib-hw-fp.

   __IEEE_BIG_ENDIAN

        Defined if the float format is big endian.  This is mutually exclusive
        with __IEEE_LITTLE_ENDIAN.

   __IEEE_LITTLE_ENDIAN
 
        Defined if the float format is little endian.  This is mutually exclusive
        with __IEEE_BIG_ENDIAN.

   Note that one of __IEEE_BIG_ENDIAN or __IEEE_LITTLE_ENDIAN must be specified for a
   platform or error will occur.

   __IEEE_BYTES_LITTLE_ENDIAN

        This flag is used in conjunction with __IEEE_BIG_ENDIAN to describe a situation 
	whereby multiple words of an IEEE floating point are in big endian order, but the
	words themselves are little endian with respect to the bytes.

   _DOUBLE_IS_32BITS 

        This is used on platforms that support double by using the 32-bit IEEE
        float type.

   _FLOAT_ARG

        This represents what type a float arg is passed as.  It is used when the type is
        not promoted to double.
	

   __OBSOLETE_MATH_DEFAULT

	Default value for __OBSOLETE_MATH if that's not set by the user.
	It should be set here based on predefined feature macros.

   __OBSOLETE_MATH

	If set to 1 then some new math code will be disabled and older libm
	code will be used instead.  This is necessary because the new math
	code does not support all targets, it assumes that the toolchain has
	ISO C99 support (hexfloat literals, standard fenv semantics), the
	target has IEEE-754 conforming binary32 float and binary64 double
	(not mixed endian) representation, standard SNaN representation,
	double and single precision arithmetics has similar latency and it
	has no legacy SVID matherr support, only POSIX errno and fenv
	exception based error handling.
*/
# 274 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/machine/ieeefp.h" 3
/* necv70 was __IEEE_LITTLE_ENDIAN. */
# 513 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/machine/ieeefp.h" 3
/* Use old math code by default.  */
# 5 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/config.h" 2 3
# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/features.h" 1 3
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2014.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */
# 6 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/config.h" 2 3
# 15 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/config.h" 3
/* exceptions first */







/* 16 bit integer machines */
# 119 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/config.h" 3
/* For the PowerPC eabi, force the _impure_ptr to be in .sdata */
# 129 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/config.h" 3
/* Configure small REENT structure for Xilinx MicroBlaze platforms */
# 196 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/config.h" 3
/* Espressif-specific */



/* ~Espressif-specific */

/* This block should be kept in sync with GCC's limits.h.  The point
   of having these definitions here is to not include limits.h, which
   would pollute the user namespace, while still using types of the
   the correct widths when deciding how to define __int32_t and
   __int64_t.  */
# 227 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/config.h" 3
/* End of block that should be kept in sync with GCC's limits.h.  */
# 261 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/config.h" 3
/* Define return type of read/write routines.  In POSIX, the return type
   for read()/write() is "ssize_t" but legacy newlib code has been using
   "int" for some time.  If not specified, "int" is defaulted.  */



/* Define `count' parameter of read/write routines.  In POSIX, the `count'
   parameter is "size_t" but legacy newlib code has been using "int" for some
   time.  If not specified, "int" is defaulted.  */
# 280 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/config.h" 3
/* See if small reent asked for at configuration time and
   is not chosen by the platform by default.  */
# 312 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/config.h" 3
/* If _MB_EXTENDED_CHARSETS_ALL is set, we want all of the extended
   charsets.  The extended charsets add a few functions and a couple
   of tables of a few K each. */
# 12 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/_ansi.h" 2 3

/*  ISO C++.  */
# 40 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/_ansi.h" 3
/* Support gcc's __attribute__ facility.  */







/*  The traditional meaning of 'extern inline' for GCC is not
  to emit the function body unless the address is explicitly
  taken.  However this behaviour is changing to match the C99
  standard, which uses 'extern inline' to indicate that the
  function body *must* be emitted.  Likewise, a function declared
  without either 'extern' or 'static' defaults to extern linkage
  (C99 6.2.2p5), and the compiler may choose whether to use the
  inline version or call the extern linkage version (6.7.4p6).
  If we are using GCC, but do not have the new behaviour, we need
  to use extern inline; if we are using a new GCC with the
  C99-compatible behaviour, or a non-GCC compiler (which we will
  have to hope is C99, since there is no other way to achieve the
  effect of omitting the function if it isn't referenced) we use
  'static inline', which c99 defines to mean more-or-less the same
  as the Gnu C 'extern inline'.  */




/* We're using GCC in C99 mode, or an unknown compiler which
  we just have to hope obeys the C99 semantics of inline.  */
# 30 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/stdio.h" 2 3





# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/cdefs.h" 1 3
/* libc/sys/linux/sys/cdefs.h - Helper macros for K&R vs. ANSI C compat. */

/* Written 2000 by Werner Almesberger */

/*-
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Berkeley Software Design, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)cdefs.h	8.8 (Berkeley) 1/9/95
 * $FreeBSD$
 */




# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/machine/_default_types.h" 1 3
/*
 *  $Id$
 */
# 46 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/cdefs.h" 2 3
# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/features.h" 1 3
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2014.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */
# 47 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/cdefs.h" 2 3
# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */
# 86 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 111 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 157 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 241 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 396 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
/* A null pointer constant.  */
# 414 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */
# 48 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/cdefs.h" 2 3
# 71 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/cdefs.h" 3
/*
 * Testing against Clang-specific extensions.
 */
# 98 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/cdefs.h" 3
/*
 * This code has been put in place to help reduce the addition of
 * compiler specific defines in FreeBSD code.  It helps to aid in
 * having a compiler-agnostic source tree.
 */
# 127 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/cdefs.h" 3
/*
 * Compiler memory barriers, specific to gcc and clang.
 */







/* XXX: if __GNUC__ >= 2: not tested everywhere originally, where replaced */
# 151 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/cdefs.h" 3
/*
 * The __CONCAT macro is used to concatenate parts of symbol names, e.g.
 * with "#define OLD(foo) __CONCAT(old,foo)", OLD(foo) produces oldfoo.
 * The __CONCAT macro is a bit tricky to use if it must work in non-ANSI
 * mode -- there must be no spaces between its arguments, and for nested
 * __CONCAT's, all the __CONCAT's must be at the left.  __CONCAT can also
 * concatenate double-quoted strings produced by the __STRING macro, but
 * this only works with ANSI C.
 *
 * __XSTRING is like __STRING, but it expands any macros in its argument
 * first.  It is only available with ANSI C.
 */
# 208 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/cdefs.h" 3
/*
 * Compiler-dependent macros to help declare dead (non-returning) and
 * pure (no side effects) functions, and unused variables.  They are
 * null except for versions of gcc that are known to support the features
 * properly (old versions of gcc-2 supported the dead and pure features
 * in a different (wrong) way).  If we do not provide an implementation
 * for a given compiler, let the compile fail if it is told to use
 * a feature that we cannot live without.
 */
# 255 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/cdefs.h" 3
/*
 * Keywords added in C11.
 */
# 309 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/cdefs.h" 3
/*
 * XXX: Some compilers (Clang 3.3, GCC 4.7) falsely announce C++11 mode
 * without actually supporting the thread_local keyword. Don't check for
 * the presence of C++11 when defining _Thread_local.
 */
# 324 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/cdefs.h" 3
/*
 * Emulation of C11 _Generic().  Unlike the previously defined C11
 * keywords, it is not possible to implement this using exactly the same
 * syntax.  Therefore implement something similar under the name
 * __generic().  Unlike _Generic(), this macro can only distinguish
 * between a single type, so it requires nested invocations to
 * distinguish multiple cases.
 */
# 343 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/cdefs.h" 3
/*
 * C99 Static array indices in function parameter declarations.  Syntax such as:
 * void bar(int myArray[static 10]);
 * is allowed in C99 but not in C++.  Define __min_size appropriately so
 * headers using it can be compiled in either language.  Use like this:
 * void bar(int myArray[__min_size(10)]);
 */
# 406 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/cdefs.h" 3
/* XXX: should use `#if __STDC_VERSION__ < 199901'. */




/*
 * GCC 2.95 provides `__restrict' as an extension to C90 to support the
 * C99-specific `restrict' type qualifier.  We happen to use `__restrict' as
 * a way to define the `restrict' type qualifier without disturbing older
 * software that is unaware of C99 keywords.
 */
# 425 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/cdefs.h" 3
/*
 * GNU C version 2.96 adds explicit branch prediction so that
 * the CPU back-end can hint the processor and also so that
 * code blocks can be reordered such that the predicted path
 * sees a more linear flow, thus improving cache behavior, etc.
 *
 * The following two macros provide us with a way to utilize this
 * compiler feature.  Use __predict_true() if you expect the expression
 * to evaluate to true, and __predict_false() if you expect the
 * expression to evaluate to false.
 *
 * A few notes about usage:
 *
 *	* Generally, __predict_false() error condition checks (unless
 *	  you have some _strong_ reason to do otherwise, in which case
 *	  document it), and/or __predict_true() `no-error' condition
 *	  checks, assuming you want to optimize for the no-error case.
 *
 *	* Other than that, if you don't know the likelihood of a test
 *	  succeeding from empirical or other `hard' evidence, don't
 *	  make predictions.
 *
 *	* These are meant to be used in places that are run `a lot'.
 *	  It is wasteful to make predictions in code that is run
 *	  seldomly (e.g. at subsystem initialization time) as the
 *	  basic block reordering that this affects can often generate
 *	  larger code.
 */
# 464 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/cdefs.h" 3
/* Only default visibility is supported on PE/COFF targets. */
# 480 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/cdefs.h" 3
/*
 * Given the pointer x to the member m of the struct s, return
 * a pointer to the containing structure.  When using GCC, we first
 * assign pointer x to a local variable, to check that its type is
 * compatible with member m.
 */
# 496 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/cdefs.h" 3
/*
 * Compiler-dependent macros to declare that functions take printf-like
 * or scanf-like arguments.  They are null except for versions of gcc
 * that are known to support the features properly (old versions of gcc-2
 * didn't permit keeping the keywords out of the application namespace).
 */
# 520 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/cdefs.h" 3
/* Compiler-dependent macros that rely on FreeBSD-specific extensions. */
# 609 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/cdefs.h" 3
/*
 * Nullability qualifiers: currently only supported by Clang.
 */
# 624 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/cdefs.h" 3
/*
 * Type Safety Checking
 *
 * Clang provides additional attributes to enable checking type safety
 * properties that cannot be enforced by the C type system. 
 */
# 642 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/cdefs.h" 3
/*
 * Lock annotations.
 *
 * Clang provides support for doing basic thread-safety tests at
 * compile-time, by marking which locks will/should be held when
 * entering/leaving a functions.
 *
 * Furthermore, it is also possible to annotate variables and structure
 * members to enforce that they are only accessed when certain locks are
 * held.
 */







/* Structure implements a lock. */
/* FIXME: Use __lockable__, etc. to avoid colliding with user namespace macros,
 * once clang is fixed: https://bugs.llvm.org/show_bug.cgi?id=34319 */


/* Function acquires an exclusive or shared lock. */





/* Function attempts to acquire an exclusive or shared lock. */





/* Function releases a lock. */


/* Function asserts that an exclusive or shared lock is held. */





/* Function requires that an exclusive or shared lock is or is not held. */







/* Function should not be analyzed. */


/*
 * Function or variable should not be sanitized, e.g., by AddressSanitizer.
 * GCC has the nosanitize attribute, but as a function attribute only, and
 * warns on use as a variable attribute.
 */
# 717 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/cdefs.h" 3
/* Guard variables and structure members by lock. */



/* Alignment builtins for better type checking and improved code generation. */
/* Provide fallback versions for other compilers (GCC/Clang < 10): */
# 36 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/stdio.h" 2 3
# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */
# 37 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/stdio.h" 2 3

/* typedef only __gnuc_va_list, used throughout the header */

# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stdarg.h" 1 3 4
/* Copyright (C) 1989-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.15  Variable arguments  <stdarg.h>
 */
# 41 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/stdio.h" 2 3

/* typedef va_list only when required */
# 54 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/stdio.h" 3
/*
 * <sys/reent.h> defines __FILE, _fpos_t.
 * They must be defined there because struct _reent needs them (and we don't
 * want reent.h to include this file.
 */

# 1 "C:\\Users\\kavee\\AppData\\Local\\Arduino15\\packages\\esp32\\tools\\esp32-arduino-libs\\idf-release_v5.3-cfea4f7c-v1\\esp32c6/include/newlib/platform_include/sys/reent.h" 1 3
/*
 * SPDX-FileCopyrightText: 2020-2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

       
# 22 "C:\\Users\\kavee\\AppData\\Local\\Arduino15\\packages\\esp32\\tools\\esp32-arduino-libs\\idf-release_v5.3-cfea4f7c-v1\\esp32c6/include/newlib/platform_include/sys/reent.h" 3
# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/reent.h" 1 3
/* This header file provides the reentrancy.  */

/* WARNING: All identifiers here must begin with an underscore.  This file is
   included by stdio.h and others and we therefore must only use identifiers
   in the namespace allotted to us.  */



extern "C" {



# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 14 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/reent.h" 2 3
# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */
# 15 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/reent.h" 2 3
# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/_types.h" 1 3
/* ANSI C namespace clean utility typedefs */

/* This file defines various typedefs needed by the system calls that support
   the C library.  Basically, they're just the POSIX versions with an '_'
   prepended.  Targets shall use <machine/_types.h> to define their own
   internal types if desired.

   There are three define patterns used for type definitions.  Lets assume
   xyz_t is a user type.

   The internal type definition uses __machine_xyz_t_defined.  It is defined by
   <machine/_types.h> to disable a default definition in <sys/_types.h>. It
   must not be used in other files.

   User type definitions are guarded by __xyz_t_defined in glibc and
   _XYZ_T_DECLARED in BSD compatible systems.
*/






# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2023 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */
# 86 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 111 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 157 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 241 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 359 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 396 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
/* A null pointer constant.  */
# 414 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/lib/gcc/riscv32-esp-elf/13.2.0/include/stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */
# 25 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/_types.h" 2 3
# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/newlib.h" 1 3
/* newlib.h.  Generated from newlib.hin by configure.  */
/* newlib.hin.  Generated from configure.ac by autoheader.  */

/* NB: The contents are filtered before being installed. */
# 26 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/_types.h" 2 3

# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/machine/_types.h" 1 3
/*
 *  $Id$
 */



# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/machine/_default_types.h" 1 3
/*
 *  $Id$
 */
# 8 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/machine/_types.h" 2 3
# 28 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/_types.h" 2 3


typedef long __blkcnt_t;



typedef long __blksize_t;



typedef __uint64_t __fsblkcnt_t;



typedef __uint32_t __fsfilcnt_t;



typedef long _off_t;





typedef int __pid_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



typedef __uint32_t __id_t;







typedef unsigned short __ino_t;
# 90 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/_types.h" 3
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;


typedef long __key_t;


/*
 * We need fpos_t for the following, but it doesn't have a leading "_",
 * so we use _fpos_t instead.
 */

typedef long _fpos_t; /* XXX must match off_t in <sys/types.h> */
    /* (and must be `long' for now) */
# 126 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/_types.h" 3
/* Defined by GCC provided <stddef.h> */




typedef unsigned int __size_t;
# 143 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/_types.h" 3
/* If __SIZE_TYPE__ is defined (gcc) we define ssize_t based on size_t.
   We simply change "unsigned" to "signed" for this single definition
   to make sure ssize_t and size_t only differ by their signedness. */

typedef signed int _ssize_t;
# 158 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/_types.h" 3
typedef _ssize_t __ssize_t;


/* Conversion state information.  */
typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value; /* Value so far.  */
} _mbstate_t;



/* Iconv descriptor type */
typedef void *_iconv_t;






typedef unsigned long /* clock() */ __clock_t;






typedef __int_least64_t __time_t;





typedef unsigned long __clockid_t;


typedef long __daddr_t;



typedef unsigned long __timer_t;


typedef __uint8_t __sa_family_t;



typedef __uint32_t __socklen_t;


typedef int __nl_item;
typedef unsigned short __nlink_t;
typedef long __suseconds_t; /* microseconds (signed) */
typedef unsigned long __useconds_t; /* microseconds (unsigned) */

/*
 * Must be identical to the __GNUCLIKE_BUILTIN_VAALIST definition in
 * <sys/cdefs.h>.  The <sys/cdefs.h> must not be included here to avoid cyclic
 * header dependencies.
 */

typedef __builtin_va_list __va_list;
# 16 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/reent.h" 2 3






typedef unsigned long __ULong;
# 34 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/reent.h" 3
# 1 "C:\\Users\\kavee\\AppData\\Local\\Arduino15\\packages\\esp32\\tools\\esp32-arduino-libs\\idf-release_v5.3-cfea4f7c-v1\\esp32c6/include/newlib/platform_include/sys/lock.h" 1 3
/*
 * SPDX-FileCopyrightText: 2022-2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
       

# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/lock.h" 1 3



/* dummy lock routines for single-threaded aps */

# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/newlib.h" 1 3
/* newlib.h.  Generated from newlib.hin by configure.  */
/* newlib.hin.  Generated from configure.ac by autoheader.  */

/* NB: The contents are filtered before being installed. */
# 7 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/lock.h" 2 3
# 1 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 8 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/lock.h" 2 3
# 30 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/lock.h" 3
extern "C" {


struct __lock;
typedef struct __lock * _LOCK_T;






extern void __retarget_lock_init(_LOCK_T *lock);

extern void __retarget_lock_init_recursive(_LOCK_T *lock);

extern void __retarget_lock_close(_LOCK_T lock);

extern void __retarget_lock_close_recursive(_LOCK_T lock);

extern void __retarget_lock_acquire(_LOCK_T lock);

extern void __retarget_lock_acquire_recursive(_LOCK_T lock);

extern int __retarget_lock_try_acquire(_LOCK_T lock);

extern int __retarget_lock_try_acquire_recursive(_LOCK_T lock);


extern void __retarget_lock_release(_LOCK_T lock);

extern void __retarget_lock_release_recursive(_LOCK_T lock);



}
# 9 "C:\\Users\\kavee\\AppData\\Local\\Arduino15\\packages\\esp32\\tools\\esp32-arduino-libs\\idf-release_v5.3-cfea4f7c-v1\\esp32c6/include/newlib/platform_include/sys/lock.h" 2 3
# 1 "C:\\Users\\kavee\\AppData\\Local\\Arduino15\\packages\\esp32\\tools\\esp32-arduino-libs\\idf-release_v5.3-cfea4f7c-v1\\esp32c6/qio_qspi/include/sdkconfig.h" 1 3
/*
 * Automatically generated file. DO NOT EDIT.
 * Espressif IoT Development Framework (ESP-IDF) 5.3.2 Configuration Header
 */
       
# 1346 "C:\\Users\\kavee\\AppData\\Local\\Arduino15\\packages\\esp32\\tools\\esp32-arduino-libs\\idf-release_v5.3-cfea4f7c-v1\\esp32c6/qio_qspi/include/sdkconfig.h" 3
/* List of deprecated options */
# 10 "C:\\Users\\kavee\\AppData\\Local\\Arduino15\\packages\\esp32\\tools\\esp32-arduino-libs\\idf-release_v5.3-cfea4f7c-v1\\esp32c6/include/newlib/platform_include/sys/lock.h" 2 3



/* Actual platfrom-specific definition of struct __lock.
 * The size here should be sufficient for a FreeRTOS mutex.
 * This is checked by a static assertion in locks.c
 *
 * Note: this might need to be made dependent on whether FreeRTOS
 * is included in the build.
 */
struct __lock {





    int reserved[23];



};

/* Compatibility definitions for the legacy ESP-specific locking implementation.
 * These used to be provided by libc/sys/xtensa/sys/lock.h in newlib.
 * Newer versions of newlib don't have this ESP-specific lock.h header, and are
 * built with _RETARGETABLE_LOCKING enabled, instead.
 */

typedef _LOCK_T _lock_t;

void _lock_init(_lock_t *plock);
void _lock_init_recursive(_lock_t *plock);
void _lock_close(_lock_t *plock);
void _lock_close_recursive(_lock_t *plock);
void _lock_acquire(_lock_t *plock);
void _lock_acquire_recursive(_lock_t *plock);
int _lock_try_acquire(_lock_t *plock);
int _lock_try_acquire_recursive(_lock_t *plock);
void _lock_release(_lock_t *plock);
void _lock_release_recursive(_lock_t *plock);
# 35 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/reent.h" 2 3
typedef _LOCK_T _flock_t;







struct _reent;

struct __locale_t;

/*
 * If _REENT_SMALL is defined, we make struct _reent as small as possible,
 * by having nearly everything possible allocated at first use.
 */

struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};

/* needed by reentrant structure */
struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};

/*
 * atexit() support.
 */



struct _on_exit_args {
 void * _fnargs[32 /* must be at least 32 to guarantee ANSI conformance */]; /* user fn args */
 void * _dso_handle[32 /* must be at least 32 to guarantee ANSI conformance */];
 /* Bitmask is set if user function takes arguments.  */
 __ULong _fntypes; /* type of exit routine -
				   Must have at least _ATEXIT_SIZE bits */
 /* Bitmask is set if function was registered via __cxa_atexit.  */
 __ULong _is_cxa;
};


struct _atexit {
 struct _atexit *_next; /* next in list */
 int _ind; /* next index in this table */
 void (*_fns[32 /* must be at least 32 to guarantee ANSI conformance */])(void); /* the table itself */
        struct _on_exit_args * _on_exit_args_ptr;
};
# 108 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/reent.h" 3
/*
 * Stdio buffers.
 *
 * This and __FILE are defined here because we need them for struct _reent,
 * but we don't want stdio.h included when stdlib.h is.
 */

struct __sbuf {
 unsigned char *_base;
 int _size;
};

/*
 * Stdio state variables.
 *
 * The following always hold:
 *
 *	if (_flags&(__SLBF|__SWR)) == (__SLBF|__SWR),
 *		_lbfsize is -_bf._size, else _lbfsize is 0
 *	if _flags&__SRD, _w is 0
 *	if _flags&__SWR, _r is 0
 *
 * This ensures that the getc and putc macros (or inline functions) never
 * try to write or read from a file that is in `read' or `write' mode.
 * (Moreover, they can, and do, automatically switch from read mode to
 * write mode, and back, on "r+" and "w+" files.)
 *
 * _lbfsize is used only to make the inline line-buffered output stream
 * code as compact as possible.
 *
 * _ub, _up, and _ur are used when ungetc() pushes back more characters
 * than fit in the current _bf, or when ungetc() pushes back a character
 * that does not match the previous one in _bf.  When this happens,
 * _ub._base becomes non-nil (i.e., a stream has ungetc() data iff
 * _ub._base!=NULL) and _up and _ur save the current values of _p and _r.
 */



/* Cygwin must use __sFILE64 for backward compatibility, even though
   it's not defining __LARGE64_FILES anymore.  To make sure that __sFILE
   is never defined, disable it here explicitely. */


struct __sFILE {
  unsigned char *_p; /* current position in (some) buffer */
  int _r; /* read space left for getc() */
  int _w; /* write space left for putc() */
  short _flags; /* flags, below; this FILE is free if 0 */
  short _file; /* fileno, if Unix descriptor, else -1 */
  struct __sbuf _bf; /* the buffer (at least 1 byte, if !NULL) */
  int _lbfsize; /* 0 or -_bf._size, for inline putc */


  struct _reent *_data;


  /* operations */
  void * _cookie; /* cookie passed to io functions */

  _ssize_t (*_read) (struct _reent *, void *,
        char *, int);
  _ssize_t (*_write) (struct _reent *, void *,
         const char *,
         int);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);

  /* separate buffer for long sequences of ungetc() */
  struct __sbuf _ub; /* ungetc buffer */
  unsigned char *_up; /* saved _p when _p is doing ungetc data */
  int _ur; /* saved _r when _r is counting ungetc data */

  /* tricks to meet minimum requirements even when malloc() fails */
  unsigned char _ubuf[3]; /* guarantee an ungetc() buffer */
  unsigned char _nbuf[1]; /* guarantee a getc() buffer */

  /* separate buffer for fgetline() when line crosses buffer boundary */
  struct __sbuf _lb; /* buffer for fgetline() */

  /* Unix stdio files get aligned to block boundaries on fseek() */
  int _blksize; /* stat.st_blksize (may be != _bf._size) */
  _off_t _offset; /* current lseek offset */






  _flock_t _lock; /* for thread-safety locking */

  _mbstate_t _mbstate; /* for wide char stdio functions. */
  int _flags2; /* for future use */
};
# 211 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/reent.h" 3
/* Cygwin must use __sFILE64 for backward compatibility, even though
   it's not defining __LARGE64_FILES anymore.  It also has to make
   sure the name is the same to satisfy C++ name mangling.  Overloading
   _fpos64_t just fixes a build problem.  The _seek64 function is
   actually never used without __LARGE64_FILES being defined. */
# 269 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/reent.h" 3
typedef struct __sFILE __FILE;



extern __FILE __sf[3];

struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};

extern struct _glue __sglue;

/*
 * rand48 family support
 *
 * Copyright (c) 1993 Martin Birgmeier
 * All rights reserved.
 *
 * You may redistribute unmodified or modified versions of this source
 * code provided that the above copyright notice and this and the
 * following conditions are retained.
 *
 * This software is provided ``as is'', and comes with no warranties
 * of any kind. I shall in no event be liable for anything that happens
 * to anyone/anything when using this software.
 */







struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;

  /* Put this in here as well, for good luck.  */
  __extension__ unsigned long long _rand_next;

};

/* How big the some arrays are.  */
# 336 "C:/Users/kavee/AppData/Local/Arduino15/packages/esp32/tools/esp-rv32/2405/riscv32-esp-elf/include/sys/reent.h" 3
/*
 * struct _reent
 *
 * This structure contains the thread-local objects needed by the library.
 * It's raison d'etre is to facilitate threads by making all library routines
 * reentrant.  The exit handler support and FILE maintenance use dedicated
 * global objects which are not included in this structure.
 */



struct _mprec
{
  /* used by mprec routines */
  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;
};


struct _misc_reent
{
  /* miscellaneous reentrant data */
  char *_strtok_last;
  _mbstate_t _mblen_state;
  _mbstate_t _wctomb_state;
  _mbstate_t _mbtowc_state;
  char _l64a_buf[8];
  int _getdate_err;
  _mbstate_t _mbrlen_state;
  _mbstate_t _mbrtowc_state;
  _mbstate_t _mbsrtowcs_state;
  _mbstate_t _wcrtomb_state;
  _mbstate_t _wcsrtombs_state;
};

/* This version of _reent is laid out with "int"s in pairs, to help
 * ports with 16-bit int's but 32-bit pointers, align nicely.  */
struct _reent
{
  /* As an exception to the above put _errno first for binary
     compatibility with non _REENT_SMALL targets.  */
  int _errno; /* local copy of errno */

  /* FILE is a big struct