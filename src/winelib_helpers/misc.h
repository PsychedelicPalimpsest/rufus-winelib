/*
 * Rufus: The Reliable USB Formatting Utility
 * Copyright © 2025 PsychedelicPalimpsest
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#include <stdlib.h>


#ifndef _mm_malloc
/* I'll be damned, microsoft uses the reverse arg order as unix, 
	and they call it "aligned_malloc" instead of "aligned_alloc" */
#define _mm_malloc(SIZE, ALLIGN) _aligned_malloc((SIZE), (ALLIGN))
#endif
#ifndef _mm_free
#define _mm_free(PTR) free((PTR))
#endif