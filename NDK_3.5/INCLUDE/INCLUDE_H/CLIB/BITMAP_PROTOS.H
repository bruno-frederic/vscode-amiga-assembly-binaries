#ifndef CLIB_BITMAP_PROTOS_H
#define CLIB_BITMAP_PROTOS_H
/*
**	$VER: bitmap_protos.h 44.1 (19.10.1999)
**	Includes Release 44.1
**
**	C prototypes. For use with 32 bit integers only.
**
**	(C) Copyright 1987-1999 Amiga, Inc.
**	    All Rights Reserved
*/

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

#ifndef INTUITION_CLASSES_H
#include <intuition/classes.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

Class * BITMAP_GetClass(VOID);

#ifdef __cplusplus
}
#endif

#endif /* CLIB_BITMAP_PROTOS_H */
