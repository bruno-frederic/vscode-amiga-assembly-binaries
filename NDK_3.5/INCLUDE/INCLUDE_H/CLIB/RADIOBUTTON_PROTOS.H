#ifndef CLIB_RADIOBUTTON_PROTOS_H
#define CLIB_RADIOBUTTON_PROTOS_H
/*
**	$VER: radiobutton_protos.h 44.1 (19.10.1999)
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

Class * RADIOBUTTON_GetClass(VOID);
struct Node * AllocRadioButtonNode(UWORD, Tag, ...);
struct Node * AllocRadioButtonNodeA(UWORD, struct TagItem *);
VOID FreeRadioButtonNode(struct Node *);
VOID SetRadioButtonNodeAttrs(struct Node *, Tag, ...);
VOID SetRadioButtonNodeAttrsA(struct Node *, struct TagItem *);
VOID GetRadioButtonNodeAttrs(struct Node *, Tag, ...);
VOID GetRadioButtonNodeAttrsA(struct Node *, struct TagItem *);

#ifdef __cplusplus
}
#endif

#endif /* CLIB_RADIOBUTTON_PROTOS_H */
