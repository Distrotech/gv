/*
**
** doc_misc.h
**
** Copyright (C) 1996-1997 Johannes Plass
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
    
#ifndef _GV_DOC_MISC_H_
#define _GV_DOC_MISC_H_

extern int			doc_scanFile (
#if NeedFunctionPrototypes
   FILE **,
   Document*,
   String,
   String,
   String*,
   String,
   String*,
   String,
   int     /* scanstyle */
#endif
);

extern int			doc_putPageInRange (
#if NeedFunctionPrototypes
    Document,
    int
#endif
);

extern int			doc_mediaIsOk (
#if NeedFunctionPrototypes
    Document,
    int,
    int
#endif
);

extern int			doc_boundingBoxOfPage (
#if NeedFunctionPrototypes
    Document,
    int,
    int*,
    int*,
    int*,
    int*
#endif
);

extern int			doc_preferredMediaOfPage (
#if NeedFunctionPrototypes
    Document,
    int,
    int*,
    int*,
    int*,
    int*
#endif
);

extern int			doc_preferredOrientationOfPage (
#if NeedFunctionPrototypes
    Document,
    int
#endif
);

extern int			doc_convStringToPage (
#if NeedFunctionPrototypes
    Document,
    String
#endif
);

extern XtPageOrientation	doc_convDocOrientToXtOrient (
#if NeedFunctionPrototypes
    int,
    int
#endif
);

extern int			doc_convStringToDocOrient (
#if NeedFunctionPrototypes
    String
#endif
);

extern int			doc_convStringToPageMedia (
#if NeedFunctionPrototypes
   Document,
   String
#endif
);

#endif /* _GV_DOC_MISC_H_ */
