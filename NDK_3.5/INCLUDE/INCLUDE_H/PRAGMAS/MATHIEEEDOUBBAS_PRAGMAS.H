#ifndef PRAGMAS_MATHIEEEDOUBBAS_PRAGMAS_H
#define PRAGMAS_MATHIEEEDOUBBAS_PRAGMAS_H

/*
**	$VER: mathieeedoubbas_pragmas.h 40.1 (17.5.1996)
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

#ifndef CLIB_MATHIEEEDOUBBAS_PROTOS_H
#include <clib/mathieeedoubbas_protos.h>
#endif /* CLIB_MATHIEEEDOUBBAS_PROTOS_H */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall MathIeeeDoubBasBase IEEEDPFix 1e 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(MathIeeeDoubBasBase, 0x1e, IEEEDPFix(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall MathIeeeDoubBasBase IEEEDPFlt 24 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(MathIeeeDoubBasBase, 0x24, IEEEDPFlt(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall MathIeeeDoubBasBase IEEEDPCmp 2a 2002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(MathIeeeDoubBasBase, 0x2a, IEEEDPCmp(d0,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall MathIeeeDoubBasBase IEEEDPTst 30 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(MathIeeeDoubBasBase, 0x30, IEEEDPTst(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall MathIeeeDoubBasBase IEEEDPAbs 36 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(MathIeeeDoubBasBase, 0x36, IEEEDPAbs(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall MathIeeeDoubBasBase IEEEDPNeg 3c 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(MathIeeeDoubBasBase, 0x3c, IEEEDPNeg(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall MathIeeeDoubBasBase IEEEDPAdd 42 2002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(MathIeeeDoubBasBase, 0x42, IEEEDPAdd(d0,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall MathIeeeDoubBasBase IEEEDPSub 48 2002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(MathIeeeDoubBasBase, 0x48, IEEEDPSub(d0,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall MathIeeeDoubBasBase IEEEDPMul 4e 2002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(MathIeeeDoubBasBase, 0x4e, IEEEDPMul(d0,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall MathIeeeDoubBasBase IEEEDPDiv 54 2002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(MathIeeeDoubBasBase, 0x54, IEEEDPDiv(d0,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
/*--- functions in V33 or higher (Release 1.2) ---*/
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall MathIeeeDoubBasBase IEEEDPFloor 5a 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(MathIeeeDoubBasBase, 0x5a, IEEEDPFloor(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall MathIeeeDoubBasBase IEEEDPCeil 60 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(MathIeeeDoubBasBase, 0x60, IEEEDPCeil(d0))
#endif /* __CLIB_PRAGMA_AMICALL */

#endif /* PRAGMAS_MATHIEEEDOUBBAS_PRAGMAS_H */
