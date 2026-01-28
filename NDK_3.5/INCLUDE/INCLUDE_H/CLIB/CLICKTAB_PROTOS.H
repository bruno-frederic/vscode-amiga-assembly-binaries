#ifndef CLIB_CLICKTAB_PROTOS_H
#define CLIB_CLICKTAB_PROTOS_H
/*
**	$VER: clicktab_protos.h 44.1 (19.10.1999)
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

Class * CLICKTAB_GetClass(VOID);
struct Node * AllocClickTabNode(Tag, ...);
struct Node * AllocClickTabNodeA(struct TagItem *);
VOID FreeClickTabNode(struct Node *);
VOID SetClickTabNodeAttrs(struct Node *, Tag, ...);
VOID SetClickTabNodeAttrsA(struct Node *, struct TagItem *);
VOID GetClickTabNodeAttrs(struct Node *, Tag, ...);
VOID GetClickTabNodeAttrsA(struct Node *, struct TagItem *);

#ifdef __cplusplus
}
#endif

#endif /* CLIB_CLICKTAB_PROTOS_H */
