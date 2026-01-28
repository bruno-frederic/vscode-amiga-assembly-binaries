#ifndef PRAGMAS_DATEBROWSER_PRAGMAS_H
#define PRAGMAS_DATEBROWSER_PRAGMAS_H

/*
**	$VER: datebrowser_pragmas.h 1.1 (6.10.1999)
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

#ifndef CLIB_DATEBROWSER_PROTOS_H
#include <clib/datebrowser_protos.h>
#endif /* CLIB_DATEBROWSER_PROTOS_H */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall DateBrowserBase DATEBROWSER_GetClass 1e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(DateBrowserBase, 0x1e, DATEBROWSER_GetClass())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall DateBrowserBase JulianWeekDay 24 21003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(DateBrowserBase, 0x24, JulianWeekDay(d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall DateBrowserBase JulianMonthDays 2a 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(DateBrowserBase, 0x2a, JulianMonthDays(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall DateBrowserBase JulianLeapYear 30 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(DateBrowserBase, 0x30, JulianLeapYear(d0))
#endif /* __CLIB_PRAGMA_AMICALL */

#endif /* PRAGMAS_DATEBROWSER_PRAGMAS_H */
