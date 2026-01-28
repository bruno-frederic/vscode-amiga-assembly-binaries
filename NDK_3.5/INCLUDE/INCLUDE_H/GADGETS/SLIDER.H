#ifndef GADGETS_SLIDER_H
#define GADGETS_SLIDER_H
/*
**	$VER: slider.h 44.1 (19.10.1999)
**	Includes Release 44.1
**
**  Definitions for the slider.gadget BOOPSI class
**
**	(C) Copyright 1987-1999 Amiga, Inc.
**	    All Rights Reserved
*/

/*****************************************************************************/

#ifndef REACTION_REACTION_H
#include <reaction/reaction.h>
#endif

#ifndef INTUITION_GADGETCLASS_H
#include <intuition/gadgetclass.h>
#endif

/*****************************************************************************/

/* Additional attributes defined by the slider.gadget class
 */

#define SLIDER_Dummy			(REACTION_Dummy+0x0028000)

#define SLIDER_Min				(SLIDER_Dummy+1L)
	/* (WORD) . */

#define SLIDER_Max				(SLIDER_Dummy+2L)
	/* (WORD) . */

#define SLIDER_Level			(SLIDER_Dummy+3L)
	/* (WORD) . */

#define SLIDER_Orientation		(SLIDER_Dummy+4L)
	/* (WORD) . */

#define SLIDER_DispHook			(SLIDER_Dummy+5L)
	/* (struct Hook *) . */

#define SLIDER_Ticks			(SLIDER_Dummy+6L)
	/* (LONG) . */

#define SLIDER_ShortTicks		(SLIDER_Dummy+7L)
	/* (BOOL) . */

#define SLIDER_TickSize			(SLIDER_Dummy+8L)
	/* (WORD) . */

#define SLIDER_KnobImage		(SLIDER_Dummy+9L)
	/* (struct Image *) . */

#define SLIDER_BodyFill			(SLIDER_Dummy+10L)
	/* (WORD) . */

#define SLIDER_BodyImage		(SLIDER_Dummy+11L)
	/* (struct Image *) . */

#define SLIDER_Gradient			(SLIDER_Dummy+12L)
	/* (BOOL) Gradient slider modem, defaults to false. */

#define SLIDER_PenArray			(SLIDER_Dummy+13L)
	/* (UWORD *) Pens for gradient slider. */

#define SLIDER_Invert			(SLIDER_Dummy+14L)
	/* (BOOL) Flip Min/Max positions. Defaults to false. */

#define SLIDER_KnobDelta		(SLIDER_Dummy+15L)
	/* (WORD) . */


/*****************************************************************************/

/* SLIDER_Orientation Modes
 */

#define SORIENT_HORIZ FREEHORIZ
#define SORIENT_VERT FREEVERT

#define SLIDER_HORIZONTAL SORIENT_HORIZ
#define SLIDER_VERTICAL	SORIENT_VERT

#endif /* GADGETS_SLIDER_H */
