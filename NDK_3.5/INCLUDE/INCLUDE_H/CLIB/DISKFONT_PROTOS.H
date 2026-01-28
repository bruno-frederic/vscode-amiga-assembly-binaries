#ifndef  CLIB_DISKFONT_PROTOS_H
#define  CLIB_DISKFONT_PROTOS_H

/*
**	$VER: diskfont_protos.h 36.1 (1.5.1990)
**
**	C prototypes. For use with 32 bit integers only.
**
**	Copyright © 1999 Amiga, Inc.
**	    All Rights Reserved
*/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef  DOS_DOS_H
#include <dos/dos.h>
#endif
#ifndef  LIBRARIES_DISKFONT_H
#include <libraries/diskfont.h>
#endif
struct TextFont *OpenDiskFont( struct TextAttr *textAttr );
LONG AvailFonts( STRPTR buffer, LONG bufBytes, LONG flags );
/*--- functions in V34 or higher (Release 1.3) ---*/
struct FontContentsHeader *NewFontContents( BPTR fontsLock, STRPTR fontName );
VOID DisposeFontContents( struct FontContentsHeader *fontContentsHeader );
/*--- functions in V36 or higher (Release 2.0) ---*/
struct DiskFont *NewScaledDiskFont( struct TextFont *sourceFont, struct TextAttr *destTextAttr );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif   /* CLIB_DISKFONT_PROTOS_H */
