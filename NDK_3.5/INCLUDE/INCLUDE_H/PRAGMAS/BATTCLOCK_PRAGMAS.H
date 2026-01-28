#ifndef PRAGMAS_BATTCLOCK_PRAGMAS_H
#define PRAGMAS_BATTCLOCK_PRAGMAS_H

/*
**	$VER: battclock_pragmas.h 40.1 (17.5.1996)
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

#ifndef CLIB_BATTCLOCK_PROTOS_H
#include <clib/battclock_protos.h>
#endif /* CLIB_BATTCLOCK_PROTOS_H */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall BattClockBase ResetBattClock 6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(BattClockBase, 0x6, ResetBattClock())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall BattClockBase ReadBattClock c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(BattClockBase, 0xc, ReadBattClock())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall BattClockBase WriteBattClock 12 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(BattClockBase, 0x12, WriteBattClock(d0))
#endif /* __CLIB_PRAGMA_AMICALL */

#endif /* PRAGMAS_BATTCLOCK_PRAGMAS_H */
