/*
**
** d_ps_xtmem.h
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

#ifndef _GV_D_PS_XTMEM_H_
#define _GV_D_PS_XTMEM_H_

#ifdef GV_PS_XTMEM_DEBUG

#   include "d_xtmem.h"   
#   define PS_XtMalloc(sss)       d_XtMalloc    ((Cardinal)(sss),                  __LINE__,__FILE__,"PS")
#   define PS_XtRealloc(ppp,sss)  d_XtRealloc   ((char*)(ppp)   , (Cardinal)(sss), __LINE__,__FILE__,"PS")
#   define PS_XtNewString(ppp)    d_XtNewString ((char*)(ppp)   ,                  __LINE__,__FILE__,"PS")
#   define PS_XtFree(ppp)         d_XtFree      ((char*)(ppp)   ,                  __LINE__,__FILE__,"PS")
#   define DUMP_XTMEM

#else  /* GV_PS_XTMEM_DEBUG */

#   define PS_XtMalloc(sss)       XtMalloc      ((Cardinal)(sss)                   )
#   define PS_XtRealloc(ppp,sss)  XtRealloc     ((char*)(ppp)   , (Cardinal)(sss)  )
#   define PS_XtNewString(ppp)    XtNewString   ((char*)(ppp)                      )
#   define PS_XtFree(ppp)         XtFree        ((char*)(ppp)                      )

#endif /* GV_PS_XTMEM_DEBUG */

#endif /* _GV_D_PS_XTMEM_H_ */

