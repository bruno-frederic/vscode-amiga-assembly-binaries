#ifndef PRAGMAS_COMMODITIES_PRAGMAS_H
#define PRAGMAS_COMMODITIES_PRAGMAS_H

/*
**	$VER: commodities_pragmas.h 40.1 (17.5.1996)
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

#ifndef CLIB_COMMODITIES_PROTOS_H
#include <clib/commodities_protos.h>
#endif /* CLIB_COMMODITIES_PROTOS_H */

/*--- functions in V36 or higher (Release 2.0) ---*/

/*  OBJECT UTILITIES */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase CreateCxObj 1e 98003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0x1e, CreateCxObj(d0,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase CxBroker 24 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0x24, CxBroker(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase ActivateCxObj 2a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0x2a, ActivateCxObj(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase DeleteCxObj 30 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0x30, DeleteCxObj(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase DeleteCxObjAll 36 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0x36, DeleteCxObjAll(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase CxObjType 3c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0x3c, CxObjType(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase CxObjError 42 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0x42, CxObjError(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase ClearCxObjError 48 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0x48, ClearCxObjError(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase SetCxObjPri 4e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0x4e, SetCxObjPri(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */

/*  OBJECT ATTACHMENT */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase AttachCxObj 54 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0x54, AttachCxObj(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase EnqueueCxObj 5a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0x5a, EnqueueCxObj(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase InsertCxObj 60 A9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0x60, InsertCxObj(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase RemoveCxObj 66 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0x66, RemoveCxObj(a0))
#endif /* __CLIB_PRAGMA_AMICALL */

/*  TYPE SPECIFIC */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase SetTranslate 72 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0x72, SetTranslate(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase SetFilter 78 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0x78, SetFilter(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase SetFilterIX 7e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0x7e, SetFilterIX(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase ParseIX 84 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0x84, ParseIX(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */

/*  COMMON MESSAGE */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase CxMsgType 8a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0x8a, CxMsgType(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase CxMsgData 90 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0x90, CxMsgData(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase CxMsgID 96 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0x96, CxMsgID(a0))
#endif /* __CLIB_PRAGMA_AMICALL */

/*  MESSAGE ROUTING */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase DivertCxMsg 9c A9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0x9c, DivertCxMsg(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase RouteCxMsg a2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0xa2, RouteCxMsg(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase DisposeCxMsg a8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0xa8, DisposeCxMsg(a0))
#endif /* __CLIB_PRAGMA_AMICALL */

/*  INPUT EVENT HANDLING */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase InvertKeyMap ae 98003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0xae, InvertKeyMap(d0,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase AddIEvents b4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0xb4, AddIEvents(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
/*--- functions in V38 or higher (Release 2.1) ---*/
/*  MORE INPUT EVENT HANDLING */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall CxBase MatchIX cc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(CxBase, 0xcc, MatchIX(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */

#endif /* PRAGMAS_COMMODITIES_PRAGMAS_H */
