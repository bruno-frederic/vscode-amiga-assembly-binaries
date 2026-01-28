#ifndef PRAGMAS_HDWRENCH_PRAGMAS_H
#define PRAGMAS_HDWRENCH_PRAGMAS_H

/*
**	$VER: hdwrench_pragmas.h 1.2 (6.10.1999)
**	Includes Release 44.1
**
**	Direct ROM interface (pragma) definitions.
**
**	Copyright © 1999 Joanne B. Dow, Wizardess Designs, for license to Amiga, Inc.
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

#ifndef CLIB_HDWRENCH_PROTOS_H
#include <clib/hdwrench_protos.h>
#endif /* CLIB_HDWRENCH_PROTOS_H */

/* Open and close a device for use with other library functions */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase HDWOpenDevice 1e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0x1e, HDWOpenDevice(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase HDWCloseDevice 24 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0x24, HDWCloseDevice())
#endif /* __CLIB_PRAGMA_AMICALL */
/* Disk access functions */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase RawRead 2a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0x2a, RawRead(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase RawWrite 30 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0x30, RawWrite(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase WriteBlock 36 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0x36, WriteBlock(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
/* Disk RDB access functions */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase ReadRDBs 3c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0x3c, ReadRDBs())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase WriteRDBs 42 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0x42, WriteRDBs())
#endif /* __CLIB_PRAGMA_AMICALL */
/* Simple query functions. */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase QueryReady 48 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0x48, QueryReady(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase QueryInquiry 4e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0x4e, QueryInquiry(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase QueryModeSense 54 981004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0x54, QueryModeSense(d0,d1,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase QueryFindValid 5a A2109806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0x5a, QueryFindValid(a0,a1,d0,d1,d2,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase QueryCapacity 60 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0x60, QueryCapacity(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
/* File and memory IO for RDB information in the two formats recognized */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase ReadMountfile 66 98003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0x66, ReadMountfile(d0,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase ReadRDBStructs 6c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0x6c, ReadRDBStructs(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase WriteMountfile 72 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0x72, WriteMountfile(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase WriteRDBStructs 78 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0x78, WriteRDBStructs(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase InMemMountfile 7e 98003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0x7e, InMemMountfile(d0,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase InMemRDBStructs 84 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0x84, InMemRDBStructs(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase OutMemMountfile 8a 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0x8a, OutMemMountfile(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase OutMemRDBStructs 90 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0x90, OutMemRDBStructs(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
/* Complex query functions. */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase FindDiskName 96 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0x96, FindDiskName(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase FindControllerID 9c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0x9c, FindControllerID(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase FindLastSector a2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0xa2, FindLastSector())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase FindDefaults a8 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0xa8, FindDefaults(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
/* The following two functions benefit from an active callback hook. */
/* Please see the HDW_CallBackMsgs.h file for suggested messages. */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase LowlevelFormat ae 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0xae, LowlevelFormat(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall HDWBase VerifyDrive b4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(HDWBase, 0xb4, VerifyDrive(a0))
#endif /* __CLIB_PRAGMA_AMICALL */

#endif /* PRAGMAS_HDWRENCH_PRAGMAS_H */
