#ifndef PRAGMAS_DISK_PRAGMAS_H
#define PRAGMAS_DISK_PRAGMAS_H

/*
**	$VER: disk_pragmas.h 40.1 (17.5.1996)
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

#ifndef CLIB_DISK_PROTOS_H
#include <clib/disk_protos.h>
#endif /* CLIB_DISK_PROTOS_H */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall DiskBase AllocUnit 6 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(DiskBase, 0x6, AllocUnit(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall DiskBase FreeUnit c 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(DiskBase, 0xc, FreeUnit(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall DiskBase GetUnit 12 901
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(DiskBase, 0x12, GetUnit(a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall DiskBase GiveUnit 18 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(DiskBase, 0x18, GiveUnit())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall DiskBase GetUnitID 1e 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(DiskBase, 0x1e, GetUnitID(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
/*------ new for V37 ------*/
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall DiskBase ReadUnitID 24 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(DiskBase, 0x24, ReadUnitID(d0))
#endif /* __CLIB_PRAGMA_AMICALL */

#endif /* PRAGMAS_DISK_PRAGMAS_H */
