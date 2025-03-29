/*
 * Rufus: The Reliable USB Formatting Utility
 * Copyright © 1991-2025 Free Software Foundation, Inc.
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

/**
 * We need to replicate missing stuff from
 *   https://github.com/bminor/glibc/blob/75ad83f564b822de0f1f5fb6ed29f105373d3c49/io/sys/stat.h
 * Using only
 *   /usr/include/wine/msvcrt/sys/stat.h
 */
#pragma once


/* Did somebody just forget some of these???? */

/* #define	S_IFDIR	0040000	 Directory.  */
/* #define	S_IFCHR	0020000	 Character device.  */
#define	S_IFBLK	0060000	/* Block device.  */
/* #define	S_IFREG	0100000	 Regular file.  */
#define	S_IFIFO	0010000	/* FIFO.  */



/* Test macros for file types.	*/
#define S_ISTYPE(mode, mask)	(((mode) & S_IFMT) == (mask))

#define	S_ISDIR(mode)	 S_ISTYPE((mode), S_IFDIR)
#define	S_ISCHR(mode)	 S_ISTYPE((mode), S_IFCHR)
#define	S_ISBLK(mode)	 S_ISTYPE((mode), S_IFBLK)
#define	S_ISREG(mode)	 S_ISTYPE((mode), S_IFREG)