#ifndef PRAGMAS_IFFPARSE_PRAGMAS_H
#define PRAGMAS_IFFPARSE_PRAGMAS_H

/*
**	$VER: iffparse_pragmas.h 40.2 (6.6.1998)
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

#ifndef CLIB_IFFPARSE_PROTOS_H
#include <clib/iffparse_protos.h>
#endif /* CLIB_IFFPARSE_PROTOS_H */

/*--- functions in V36 or higher (Release 2.0) ---*/

/* Basic functions */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase AllocIFF 1e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x1e, AllocIFF())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase OpenIFF 24 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x24, OpenIFF(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase ParseIFF 2a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x2a, ParseIFF(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase CloseIFF 30 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x30, CloseIFF(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase FreeIFF 36 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x36, FreeIFF(a0))
#endif /* __CLIB_PRAGMA_AMICALL */

/* Read/Write functions */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase ReadChunkBytes 3c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x3c, ReadChunkBytes(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase WriteChunkBytes 42 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x42, WriteChunkBytes(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase ReadChunkRecords 48 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x48, ReadChunkRecords(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase WriteChunkRecords 4e 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x4e, WriteChunkRecords(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */

/* Context entry/exit */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase PushChunk 54 210804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x54, PushChunk(a0,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase PopChunk 5a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x5a, PopChunk(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
/*--- (1 function slot reserved here) ---*/

/* Low-level handler installation */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase EntryHandler 66 A9210806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x66, EntryHandler(a0,d0,d1,d2,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase ExitHandler 6c A9210806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x6c, ExitHandler(a0,d0,d1,d2,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */

/* Built-in chunk/property handlers */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase PropChunk 72 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x72, PropChunk(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase PropChunks 78 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x78, PropChunks(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase StopChunk 7e 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x7e, StopChunk(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase StopChunks 84 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x84, StopChunks(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase CollectionChunk 8a 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x8a, CollectionChunk(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase CollectionChunks 90 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x90, CollectionChunks(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase StopOnExit 96 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x96, StopOnExit(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */

/* Context utilities */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase FindProp 9c 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x9c, FindProp(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase FindCollection a2 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0xa2, FindCollection(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase FindPropContext a8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0xa8, FindPropContext(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase CurrentChunk ae 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0xae, CurrentChunk(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase ParentChunk b4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0xb4, ParentChunk(a0))
#endif /* __CLIB_PRAGMA_AMICALL */

/* LocalContextItem support functions */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase AllocLocalItem ba 321004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0xba, AllocLocalItem(d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase LocalItemData c0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0xc0, LocalItemData(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase SetLocalItemPurge c6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0xc6, SetLocalItemPurge(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase FreeLocalItem cc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0xcc, FreeLocalItem(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase FindLocalItem d2 210804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0xd2, FindLocalItem(a0,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase StoreLocalItem d8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0xd8, StoreLocalItem(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase StoreItemInContext de A9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0xde, StoreItemInContext(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */

/* IFFHandle initialization */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase InitIFF e4 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0xe4, InitIFF(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase InitIFFasDOS ea 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0xea, InitIFFasDOS(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase InitIFFasClip f0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0xf0, InitIFFasClip(a0))
#endif /* __CLIB_PRAGMA_AMICALL */

/* Internal clipboard support */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase OpenClipboard f6 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0xf6, OpenClipboard(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase CloseClipboard fc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0xfc, CloseClipboard(a0))
#endif /* __CLIB_PRAGMA_AMICALL */

/* Miscellaneous */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase GoodID 102 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x102, GoodID(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase GoodType 108 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x108, GoodType(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall IFFParseBase IDtoStr 10e 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(IFFParseBase, 0x10e, IDtoStr(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */

#endif /* PRAGMAS_IFFPARSE_PRAGMAS_H */
