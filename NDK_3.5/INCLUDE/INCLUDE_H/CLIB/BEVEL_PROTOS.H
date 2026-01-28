#ifndef CLIB_BEVEL_PROTOS_H
#define CLIB_BEVEL_PROTOS_H
/*
**	$VER: bevel_protos.h 44.1 (19.10.1999)
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

Class * BEVEL_GetClass(VOID);
VOID RereadBevelPrefs(VOID);

#ifdef __cplusplus
}
#endif

#endif /* CLIB_BEVEL_PROTOS_H */
