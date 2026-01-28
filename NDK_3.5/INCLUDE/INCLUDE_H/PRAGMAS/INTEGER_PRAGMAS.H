#ifndef PRAGMAS_INTEGER_PRAGMAS_H
#define PRAGMAS_INTEGER_PRAGMAS_H

/*
**	$VER: integer_pragmas.h 1.1 (6.10.1999)
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

#ifndef CLIB_INTEGER_PROTOS_H
#include <clib/integer_protos.h>
#endif /* CLIB_INTEGER_PROTOS_H */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IntegerBase INTEGER_GetClass 1e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IntegerBase, 0x1e, INTEGER_GetClass())
#endif /* __CLIB_PRAGMA_AMICALL */

#endif /* PRAGMAS_INTEGER_PRAGMAS_H */
