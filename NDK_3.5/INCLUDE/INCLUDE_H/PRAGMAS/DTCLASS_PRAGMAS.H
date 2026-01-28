#ifndef PRAGMAS_DTCLASS_PRAGMAS_H
#define PRAGMAS_DTCLASS_PRAGMAS_H

/*
**	$VER: dtclass_pragmas.h 44.1 (25.1.1993)
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

#ifndef CLIB_DTCLASS_PROTOS_H
#include <clib/dtclass_protos.h>
#endif /* CLIB_DTCLASS_PROTOS_H */

/*--- functions in V39 or higher (Release 3) ---*/

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall DTClassBase ObtainEngine 1e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(DTClassBase, 0x1e, ObtainEngine())
#endif /* __CLIB_PRAGMA_AMICALL */

#endif /* PRAGMAS_DTCLASS_PRAGMAS_H */
