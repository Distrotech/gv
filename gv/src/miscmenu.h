/*
**
** miscmenu.h
**
** Copyright (C) 1995, 1996, 1997 Johannes Plass
** 
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
** 
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
** 
** Author:   Johannes Plass (plass@thep.physik.uni-mainz.de)
**           Department of Physics
**           Johannes Gutenberg-University
**           Mainz, Germany
**
*/

#ifndef _GV_MISCMENU_H_
#define _GV_MISCMENU_H_

extern void                     miscmenu_freeMiscMenuEntries (
#if NeedFunctionPrototypes
  MiscMenuEntry*
#endif
);

extern MiscMenuEntry *           miscmenu_parseMiscMenuEntries (
#if NeedFunctionPrototypes 
  char *
#endif
);

extern void 			miscmenu_a_miscMenu (
#if NeedFunctionPrototypes
  Widget,
  XEvent *,
  String *,
  Cardinal *
#endif
);

#endif /* _GV_MISCMENU_H_ */
