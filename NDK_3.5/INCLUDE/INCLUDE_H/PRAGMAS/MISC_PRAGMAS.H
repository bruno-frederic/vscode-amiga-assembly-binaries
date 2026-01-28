#ifndef PRAGMAS_MISC_PRAGMAS_H
#define PRAGMAS_MISC_PRAGMAS_H

/*
**	$VER: misc_pragmas.h 40.1 (17.5.1996)
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

#ifndef CLIB_MISC_PROTOS_H
#include <clib/misc_protos.h>
#endif /* CLIB_MISC_PROTOS_H */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall MiscBase AllocMiscResource 6 9002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(MiscBase, 0x6, AllocMiscResource(d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall MiscBase FreeMiscResource c 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(MiscBase, 0xc, FreeMiscResource(d0))
#endif /* __CLIB_PRAGMA_AMICALL */

#endif /* PRAGMAS_MISC_PRAGMAS_H */
