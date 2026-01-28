#ifndef PRAGMAS_COLORWHEEL_PRAGMAS_H
#define PRAGMAS_COLORWHEEL_PRAGMAS_H

/*
**	$VER: colorwheel_pragmas.h 39.1 (21.7.1992)
**	Includes Release 44.1
**
**	Direct ROM interface (pragma) definitions.
**
**	Copyright © 1999 Amiga, Inc.
**	    All Rights Reserved
*/

#if defined(LATTICE) || defined(__SASC) || defined(_DCC)
#ifndef __CLIB_PRAGMA_LIBCALL
#define __CLIB_PRAGMA_LIBCALL
#endif /* __CLIB_PRAGMA_LIBCALL */
#else /* __MAXON__, __STORM__ or AZTEC_C */
#ifndef __CLIB_PRAGMA_AMICALL
#define __CLIB_PRAGMA_AMICALL
#endif /* __CLIB_PRAGMA_AMICALL */
#endif /* */

#if defined(__SASC) || defined(__STORM__)
#ifndef __CLIB_PRAGMA_TAGCALL
#define __CLIB_PRAGMA_TAGCALL
#endif /* __CLIB_PRAGMA_TAGCALL */
#endif /* __MAXON__, __STORM__ or AZTEC_C */

#ifndef CLIB_COLORWHEEL_PROTOS_H
#include <clib/colorwheel_protos.h>
#endif /* CLIB_COLORWHEEL_PROTOS_H */

/*--- functions in V39 or higher (Release 3) ---*/

/* Public entries */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall ColorWheelBase ConvertHSBToRGB 1e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(ColorWheelBase, 0x1e, ConvertHSBToRGB(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall ColorWheelBase ConvertRGBToHSB 24 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(ColorWheelBase, 0x24, ConvertRGBToHSB(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */

#endif /* PRAGMAS_COLORWHEEL_PRAGMAS_H */
