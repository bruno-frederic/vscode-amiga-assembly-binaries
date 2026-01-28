#ifndef CLIB_LISTBROWSER_H
#define CLIB_LISTBROWSER_H
/*
**	$VER: listbrowser_protos.h 44.1 (19.10.1999)
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

Class * LISTBROWSER_GetClass(VOID);
struct Node * AllocListBrowserNode(UWORD, Tag, ...);
struct Node * AllocListBrowserNodeA(UWORD, struct TagItem *);
VOID FreeListBrowserNode(struct Node *);
VOID FreeListBrowserList(struct List *);
VOID SetListBrowserNodeAttrs(struct Node *, Tag, ...);
VOID SetListBrowserNodeAttrsA(struct Node *, struct TagItem *);
VOID GetListBrowserNodeAttrs(struct Node *, Tag, ...);
VOID GetListBrowserNodeAttrsA(struct Node *, struct TagItem *);
VOID ListBrowserSelectAll(struct List *);
VOID ShowListBrowserNodeChildren(struct Node *, WORD);
VOID HideListBrowserNodeChildren(struct Node *);
VOID ShowAllListBrowserChildren(struct List *);
VOID HideAllListBrowserChildren(struct List *);

#ifdef __cplusplus
}
#endif

#endif /* CLIB_LISTBROWSER_PROTOS_H */
