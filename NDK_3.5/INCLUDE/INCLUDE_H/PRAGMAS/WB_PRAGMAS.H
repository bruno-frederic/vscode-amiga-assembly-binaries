#ifndef PRAGMAS_WB_PRAGMAS_H
#define PRAGMAS_WB_PRAGMAS_H

/*
**	$VER: wb_pragmas.h 44.5 (21.6.1999)
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

#ifndef CLIB_WB_PROTOS_H
#include <clib/wb_protos.h>
#endif /* CLIB_WB_PROTOS_H */

/*--- functions in V36 or higher (Release 2.0) ---*/

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall WorkbenchBase AddAppWindowA 30 A981005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(WorkbenchBase, 0x30, AddAppWindowA(d0,d1,a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
 #ifdef __CLIB_PRAGMA_LIBCALL
  #pragma tagcall WorkbenchBase AddAppWindow 30 A981005
 #endif /* __CLIB_PRAGMA_LIBCALL */
 #ifdef __CLIB_PRAGMA_AMICALL
  #pragma tagcall(WorkbenchBase, 0x30, AddAppWindow(d0,d1,a0,a1,a2))
 #endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall WorkbenchBase RemoveAppWindow 36 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(WorkbenchBase, 0x36, RemoveAppWindow(a0))
#endif /* __CLIB_PRAGMA_AMICALL */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall WorkbenchBase AddAppIconA 3c CBA981007
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(WorkbenchBase, 0x3c, AddAppIconA(d0,d1,a0,a1,a2,a3,a4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
 #ifdef __CLIB_PRAGMA_LIBCALL
  #pragma tagcall WorkbenchBase AddAppIcon 3c CBA981007
 #endif /* __CLIB_PRAGMA_LIBCALL */
 #ifdef __CLIB_PRAGMA_AMICALL
  #pragma tagcall(WorkbenchBase, 0x3c, AddAppIcon(d0,d1,a0,a1,a2,a3,a4))
 #endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall WorkbenchBase RemoveAppIcon 42 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(WorkbenchBase, 0x42, RemoveAppIcon(a0))
#endif /* __CLIB_PRAGMA_AMICALL */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall WorkbenchBase AddAppMenuItemA 48 A981005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(WorkbenchBase, 0x48, AddAppMenuItemA(d0,d1,a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
 #ifdef __CLIB_PRAGMA_LIBCALL
  #pragma tagcall WorkbenchBase AddAppMenuItem 48 A981005
 #endif /* __CLIB_PRAGMA_LIBCALL */
 #ifdef __CLIB_PRAGMA_AMICALL
  #pragma tagcall(WorkbenchBase, 0x48, AddAppMenuItem(d0,d1,a0,a1,a2))
 #endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall WorkbenchBase RemoveAppMenuItem 4e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(WorkbenchBase, 0x4e, RemoveAppMenuItem(a0))
#endif /* __CLIB_PRAGMA_AMICALL */

/*--- functions in V39 or higher (Release 3) ---*/


#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall WorkbenchBase WBInfo 5a A9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(WorkbenchBase, 0x5a, WBInfo(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */

/*--- functions in V44 or higher (Release 3.5) ---*/
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall WorkbenchBase OpenWorkbenchObjectA 60 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(WorkbenchBase, 0x60, OpenWorkbenchObjectA(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
 #ifdef __CLIB_PRAGMA_LIBCALL
  #pragma tagcall WorkbenchBase OpenWorkbenchObject 60 9802
 #endif /* __CLIB_PRAGMA_LIBCALL */
 #ifdef __CLIB_PRAGMA_AMICALL
  #pragma tagcall(WorkbenchBase, 0x60, OpenWorkbenchObject(a0,a1))
 #endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall WorkbenchBase CloseWorkbenchObjectA 66 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(WorkbenchBase, 0x66, CloseWorkbenchObjectA(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
 #ifdef __CLIB_PRAGMA_LIBCALL
  #pragma tagcall WorkbenchBase CloseWorkbenchObject 66 9802
 #endif /* __CLIB_PRAGMA_LIBCALL */
 #ifdef __CLIB_PRAGMA_AMICALL
  #pragma tagcall(WorkbenchBase, 0x66, CloseWorkbenchObject(a0,a1))
 #endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall WorkbenchBase WorkbenchControlA 6c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(WorkbenchBase, 0x6c, WorkbenchControlA(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
 #ifdef __CLIB_PRAGMA_LIBCALL
  #pragma tagcall WorkbenchBase WorkbenchControl 6c 9802
 #endif /* __CLIB_PRAGMA_LIBCALL */
 #ifdef __CLIB_PRAGMA_AMICALL
  #pragma tagcall(WorkbenchBase, 0x6c, WorkbenchControl(a0,a1))
 #endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall WorkbenchBase AddAppWindowDropZoneA 72 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(WorkbenchBase, 0x72, AddAppWindowDropZoneA(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
 #ifdef __CLIB_PRAGMA_LIBCALL
  #pragma tagcall WorkbenchBase AddAppWindowDropZone 72 910804
 #endif /* __CLIB_PRAGMA_LIBCALL */
 #ifdef __CLIB_PRAGMA_AMICALL
  #pragma tagcall(WorkbenchBase, 0x72, AddAppWindowDropZone(a0,d0,d1,a1))
 #endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall WorkbenchBase RemoveAppWindowDropZone 78 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(WorkbenchBase, 0x78, RemoveAppWindowDropZone(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall WorkbenchBase ChangeWorkbenchSelectionA 7e A9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(WorkbenchBase, 0x7e, ChangeWorkbenchSelectionA(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
 #ifdef __CLIB_PRAGMA_LIBCALL
  #pragma tagcall WorkbenchBase ChangeWorkbenchSelection 7e A9803
 #endif /* __CLIB_PRAGMA_LIBCALL */
 #ifdef __CLIB_PRAGMA_AMICALL
  #pragma tagcall(WorkbenchBase, 0x7e, ChangeWorkbenchSelection(a0,a1,a2))
 #endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall WorkbenchBase MakeWorkbenchObjectVisibleA 84 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(WorkbenchBase, 0x84, MakeWorkbenchObjectVisibleA(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
 #ifdef __CLIB_PRAGMA_LIBCALL
  #pragma tagcall WorkbenchBase MakeWorkbenchObjectVisible 84 9802
 #endif /* __CLIB_PRAGMA_LIBCALL */
 #ifdef __CLIB_PRAGMA_AMICALL
  #pragma tagcall(WorkbenchBase, 0x84, MakeWorkbenchObjectVisible(a0,a1))
 #endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */


#endif /* PRAGMAS_WB_PRAGMAS_H */
