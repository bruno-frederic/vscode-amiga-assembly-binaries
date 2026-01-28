#ifndef CLIB_RESOURCE_PROTOS_H
#define CLIB_RESOURCE_PROTOS_H
/*
**	$VER: resource_protos.h 44.1 (19.10.1999)
**	Includes Release 44.1
**
**	C prototypes. For use with 32 bit integers only.
**
**	(C) Copyright 1987-1999 Amiga, Inc.
**	    All Rights Reserved
*/


#ifndef LIBRARIES_RESOURCE_H
#include <libraries/resource.h>
#endif

#ifndef INTUITION_CLASSUSR_H
#include <intuition/classusr.h>
#endif

#ifndef UTILITY_TAGITEM_H
#include <utility/tagitem.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

RESOURCEFILE RL_OpenResource(void *,struct Screen *,struct Catalog *);
void RL_CloseResource(RESOURCEFILE);

Object *RL_NewObjectA(RESOURCEFILE,RESOURCEID,struct TagItem *);
Object *RL_NewObject(RESOURCEFILE,RESOURCEID,Tag,...);
void RL_DisposeObject(RESOURCEFILE,Object *);

Object **RL_NewGroupA(RESOURCEFILE,RESOURCEID,struct TagItem *);
Object **RL_NewGroup(RESOURCEFILE,RESOURCEID,Tag,...);
void RL_DisposeGroup(RESOURCEFILE,Object **);

Object **RL_GetObjectArray(RESOURCEFILE,Object *,RESOURCEID);

BOOL RL_SetResourceScreen(RESOURCEFILE,struct Screen *);

#ifdef __cplusplus
}
#endif

#ifdef __STORM__
#ifndef _INCLUDE_RESOURCE_H
#include <pragma/resource_lib.h>
#endif
#endif

#endif /* CLIB_RESOURCE_H */
