/********************************************************************\
 * Copyright (C) 1997 Robin D. Clark                                *
 * Copyright (C) 1998, 1999, 2000 Linas Vepstas (linas@linas.org)   *
 *                                                                  *
 * This program is free software; you can redistribute it and/or    *
 * modify it under the terms of the GNU General Public License as   *
 * published by the Free Software Foundation; either version 2 of   *
 * the License, or (at your option) any later version.              *
 *                                                                  *
 * This program is distributed in the hope that it will be useful,  *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of   *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the    *
 * GNU General Public License for more details.                     *
 *                                                                  *
 * You should have received a copy of the GNU General Public License*
 * along with this program; if not, write to the Free Software      *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.        *
\********************************************************************/

#ifndef GNC_FILE_P_H
#define GNC_FILE_P_H

#include "gnc-file.h"

void gnc_file_init (void);

typedef void (*GNCHistoryAddFileFunc) (const char *filename);
typedef char * (*GNCHistoryGetLastFunc) (void);

typedef char * (*GNCFileDialogFunc) (const char * title,
				     const char * filter,
				     const char * default_name);

void gnc_file_set_handlers (GNCHistoryAddFileFunc history_add_file_func,
                            GNCHistoryGetLastFunc history_get_last_func,
                            GNCFileDialogFunc file_dialog_func);

#endif
