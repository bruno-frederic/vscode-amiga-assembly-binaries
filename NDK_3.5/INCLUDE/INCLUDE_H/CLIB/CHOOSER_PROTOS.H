#ifndef CLIB_CHOOSER_PROTOS_H
#define CLIB_CHOOSER_PROTOS_H
/*
**	$VER: chooser_protos.h 44.1 (19.10.1999)
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

Class * CHOOSER_GetClass(VOID);
struct Node * AllocChooserNode(Tag, ...);
struct Node * AllocChooserNodeA(struct TagItem *);
VOID FreeChooserNode(struct Node *);
VOID SetChooserNodeAttrs(struct Node *, Tag, ...);
VOID SetChooserNodeAttrsA(struct Node *, struct TagItem *);
VOID GetChooserNodeAttrs(struct Node *, Tag, ...);
VOID GetChooserNodeAttrsA(struct Node *, struct TagItem *);
ULONG ShowChooser(Object *o, struct Window *w, ULONG xpos, ULONG ypos);
VOID HideChooser(Object *o, struct Window *w);

#ifdef __cplusplus
}
#endif

#endif /* CLIB_CHOOSER_PROTOS_H */
