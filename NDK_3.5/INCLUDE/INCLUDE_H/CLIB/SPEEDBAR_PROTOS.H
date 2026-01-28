#ifndef CLIB_SPEEDBAR_PROTOS_H
#define CLIB_SPEEDBAR_PROTOS_H
/*
**	$VER: speedbar_protos.h 44.1 (19.10.1999)
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

#ifndef UTILITY_TAGITEM_H
#include <utility/tagitem.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

Class * SPEEDBAR_GetClass(VOID);
struct Node * AllocSpeedButtonNode(UWORD, Tag, ...);
struct Node * AllocSpeedButtonNodeA(UWORD, struct TagItem *);
VOID FreeSpeedButtonNode(struct Node *);
VOID SetSpeedButtonNodeAttrs(struct Node *, Tag, ...);
VOID SetSpeedButtonNodeAttrsA(struct Node *, struct TagItem *);
VOID GetSpeedButtonNodeAttrs(struct Node *, Tag, ...);
VOID GetSpeedButtonNodeAttrsA(struct Node *, struct TagItem *);

#ifdef __cplusplus
}
#endif

#endif /* CLIB_SPEEDBAR_PROTOS_H */
