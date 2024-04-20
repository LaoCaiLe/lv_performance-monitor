/*******************************************************************************
 * Size: 10 px
 * Bpp: 4
 * Opts: --bpp 4 --size 10 --no-compress --font JetBrainsMono-Bold.ttf --range 32-127 --format lvgl -o Jetbrains_Momo_10.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef JETBRAINS_MOMO_10
#define JETBRAINS_MOMO_10 1
#endif

#if JETBRAINS_MOMO_10

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0xaa, 0xaa, 0x99, 0x99, 0x99, 0x33, 0x33, 0xbb,

    /* U+0022 "\"" */
    0xd7, 0x7d, 0xc7, 0x7c, 0xc6, 0x6c, 0x21, 0x12,

    /* U+0023 "#" */
    0x0, 0xd0, 0xb2, 0x3, 0xa0, 0xd0, 0x4f, 0xfe,
    0xf9, 0x8, 0x53, 0xa0, 0xa, 0x36, 0x80, 0x9f,
    0xef, 0xf4, 0xd, 0xb, 0x30, 0x2b, 0xd, 0x0,

    /* U+0024 "$" */
    0x0, 0x44, 0x0, 0x0, 0x88, 0x10, 0xd, 0xff,
    0xd0, 0x3f, 0x55, 0xb2, 0x2f, 0xb5, 0x0, 0x7,
    0xff, 0x80, 0x0, 0x5b, 0xf4, 0x38, 0x55, 0xe6,
    0x2f, 0xdd, 0xf2, 0x2, 0xaa, 0x20, 0x0, 0x55,
    0x0,

    /* U+0025 "%" */
    0x8e, 0x80, 0x3a, 0xe0, 0xe0, 0xc1, 0xe1, 0xe8,
    0x60, 0x7d, 0x9b, 0x0, 0x0, 0xb9, 0xd6, 0x6,
    0x7e, 0x1e, 0x1c, 0xe, 0xe, 0xa3, 0x8, 0xd8,

    /* U+0026 "&" */
    0x6, 0xed, 0x20, 0x0, 0xf5, 0xaa, 0x0, 0xc,
    0x60, 0x10, 0x2, 0xcf, 0x20, 0x0, 0xbb, 0x8d,
    0x7d, 0xd, 0x50, 0xcf, 0x20, 0xba, 0x3d, 0xf3,
    0x3, 0xde, 0x76, 0xd0,

    /* U+0027 "'" */
    0xaa, 0xaa, 0x99, 0x22,

    /* U+0028 "(" */
    0x0, 0x0, 0x0, 0x6b, 0x7, 0xf6, 0xf, 0x60,
    0x3f, 0x0, 0x5f, 0x0, 0x5f, 0x0, 0x4f, 0x0,
    0x1f, 0x30, 0xa, 0xd3, 0x0, 0xad, 0x0, 0x1,

    /* U+0029 ")" */
    0x0, 0x0, 0xb6, 0x0, 0x6f, 0x70, 0x6, 0xf0,
    0x0, 0xf3, 0x0, 0xf5, 0x0, 0xf5, 0x0, 0xf4,
    0x3, 0xf1, 0x3d, 0xa0, 0xda, 0x0, 0x10, 0x0,

    /* U+002A "*" */
    0x0, 0x88, 0x0, 0x33, 0x77, 0x33, 0x5e, 0xee,
    0xe5, 0x1, 0xdd, 0x10, 0xb, 0x88, 0xa0, 0x5,
    0x0, 0x50,

    /* U+002B "+" */
    0x0, 0xaa, 0x0, 0x0, 0xaa, 0x0, 0x6f, 0xff,
    0xf6, 0x13, 0xbb, 0x31, 0x0, 0xaa, 0x0, 0x0,
    0x11, 0x0,

    /* U+002C "," */
    0x2, 0x30, 0xba, 0xd, 0x70, 0xf3,

    /* U+002D "-" */
    0x0, 0x0, 0x9f, 0xf9, 0x13, 0x31,

    /* U+002E "." */
    0xbb, 0xbb,

    /* U+002F "/" */
    0x0, 0x1, 0xf3, 0x0, 0x6, 0xe0, 0x0, 0xc,
    0x80, 0x0, 0x2f, 0x20, 0x0, 0x7d, 0x0, 0x0,
    0xd7, 0x0, 0x2, 0xf2, 0x0, 0x8, 0xc0, 0x0,
    0xe, 0x60, 0x0, 0x3f, 0x10, 0x0,

    /* U+0030 "0" */
    0x6, 0xee, 0x60, 0x2f, 0x55, 0xf2, 0x4d, 0x0,
    0xd4, 0x5d, 0x88, 0xd5, 0x5d, 0x11, 0xd5, 0x4d,
    0x0, 0xd4, 0x2f, 0x55, 0xf2, 0x6, 0xee, 0x60,

    /* U+0031 "1" */
    0x3, 0xef, 0x0, 0x2f, 0xbf, 0x0, 0x25, 0x4f,
    0x0, 0x0, 0x4f, 0x0, 0x0, 0x4f, 0x0, 0x0,
    0x4f, 0x0, 0x3, 0x6f, 0x31, 0x2f, 0xff, 0xf8,

    /* U+0032 "2" */
    0x7, 0xee, 0x60, 0x3f, 0x67, 0xf2, 0x26, 0x0,
    0xf4, 0x0, 0x6, 0xf1, 0x0, 0x3f, 0x60, 0x2,
    0xe8, 0x0, 0x1e, 0xb3, 0x31, 0x4f, 0xff, 0xf6,

    /* U+0033 "3" */
    0x2f, 0xff, 0xf1, 0x2, 0x2b, 0xa0, 0x0, 0x9c,
    0x0, 0x0, 0xff, 0x90, 0x0, 0x3, 0xf2, 0x13,
    0x0, 0xf4, 0x4f, 0x46, 0xf2, 0x8, 0xee, 0x60,

    /* U+0034 "4" */
    0x0, 0x1e, 0x60, 0x0, 0xac, 0x0, 0x4, 0xf2,
    0x0, 0xd, 0x81, 0x80, 0x5e, 0x3, 0xf1, 0x6f,
    0xff, 0xf1, 0x12, 0x25, 0xf1, 0x0, 0x3, 0xf1,

    /* U+0035 "5" */
    0x2f, 0xff, 0xf0, 0x2f, 0x33, 0x30, 0x2f, 0x0,
    0x0, 0x2f, 0xfe, 0x70, 0x2, 0x25, 0xf2, 0x13,
    0x0, 0xf4, 0x3f, 0x55, 0xf2, 0x8, 0xee, 0x70,

    /* U+0036 "6" */
    0x0, 0x7e, 0x0, 0x0, 0xe6, 0x0, 0x7, 0xd0,
    0x0, 0xe, 0xdd, 0x80, 0x4f, 0x44, 0xf4, 0x7c,
    0x0, 0xc6, 0x4f, 0x44, 0xf4, 0x8, 0xee, 0x70,

    /* U+0037 "7" */
    0x5f, 0xff, 0xf9, 0x5e, 0x22, 0xe7, 0x27, 0x4,
    0xf1, 0x0, 0xa, 0xb0, 0x0, 0x1f, 0x40, 0x0,
    0x7e, 0x0, 0x0, 0xd8, 0x0, 0x3, 0xf2, 0x0,

    /* U+0038 "8" */
    0x7, 0xee, 0x70, 0x2f, 0x44, 0xf2, 0x2f, 0x22,
    0xf2, 0x8, 0xff, 0x80, 0x3f, 0x44, 0xf3, 0x7c,
    0x0, 0xc6, 0x4f, 0x44, 0xf4, 0x7, 0xee, 0x70,

    /* U+0039 "9" */
    0x7, 0xee, 0x70, 0x3f, 0x55, 0xf3, 0x7c, 0x0,
    0xc6, 0x5f, 0x11, 0xf4, 0xa, 0xff, 0xe0, 0x0,
    0x1e, 0x70, 0x0, 0x6e, 0x0, 0x0, 0xe7, 0x0,

    /* U+003A ":" */
    0xbb, 0x88, 0x0, 0x0, 0x88, 0xbb,

    /* U+003B ";" */
    0xb, 0xb0, 0x88, 0x0, 0x0, 0x0, 0x2, 0x30,
    0xca, 0xe, 0x61, 0xf2,

    /* U+003C "<" */
    0x0, 0x0, 0x11, 0x0, 0x19, 0xf3, 0x9, 0xfa,
    0x20, 0x3f, 0x50, 0x0, 0x8, 0xfb, 0x30, 0x0,
    0x18, 0xf3, 0x0, 0x0, 0x11,

    /* U+003D "=" */
    0x0, 0x0, 0x0, 0x3f, 0xff, 0xf3, 0x3, 0x33,
    0x30, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xf3, 0x3,
    0x33, 0x30,

    /* U+003E ">" */
    0x11, 0x0, 0x0, 0x3f, 0x91, 0x0, 0x2, 0xaf,
    0x90, 0x0, 0x5, 0xf3, 0x3, 0xbf, 0x80, 0x3f,
    0x81, 0x0, 0x11, 0x0, 0x0,

    /* U+003F "?" */
    0xdf, 0xd3, 0x34, 0xae, 0x0, 0x7f, 0x2f, 0xf6,
    0x2f, 0x10, 0x0, 0x0, 0x5, 0x0, 0x4f, 0x20,

    /* U+0040 "@" */
    0x7, 0xef, 0x90, 0x4d, 0x20, 0xc7, 0x97, 0x0,
    0x5a, 0xa6, 0x3d, 0xbb, 0xa6, 0xa6, 0x6b, 0xa6,
    0xb5, 0x5b, 0xa6, 0x97, 0x7a, 0x97, 0x2d, 0xd2,
    0x4e, 0x30, 0x0, 0x6, 0xef, 0x50,

    /* U+0041 "A" */
    0x0, 0xee, 0x0, 0x2, 0xff, 0x20, 0x6, 0xcc,
    0x60, 0x9, 0x99, 0x90, 0xd, 0x56, 0xd0, 0x1f,
    0xff, 0xf1, 0x5f, 0x22, 0xf4, 0x8b, 0x0, 0xb8,

    /* U+0042 "B" */
    0x3f, 0xfe, 0x80, 0x3f, 0x14, 0xf3, 0x3f, 0x1,
    0xf2, 0x3f, 0xff, 0x80, 0x3f, 0x24, 0xf3, 0x3f,
    0x0, 0xc7, 0x3f, 0x14, 0xf4, 0x3f, 0xff, 0x80,

    /* U+0043 "C" */
    0x6, 0xef, 0x70, 0x1f, 0x65, 0xf4, 0x3f, 0x0,
    0x41, 0x3f, 0x0, 0x0, 0x3f, 0x0, 0x0, 0x3f,
    0x0, 0x41, 0x1f, 0x65, 0xf4, 0x6, 0xef, 0x70,

    /* U+0044 "D" */
    0x4f, 0xfe, 0x50, 0x4f, 0x36, 0xf2, 0x4f, 0x0,
    0xe5, 0x4f, 0x0, 0xe5, 0x4f, 0x0, 0xe5, 0x4f,
    0x0, 0xe5, 0x4f, 0x36, 0xf2, 0x4f, 0xfe, 0x50,

    /* U+0045 "E" */
    0x2f, 0xff, 0xf4, 0x2f, 0x42, 0x20, 0x2f, 0x10,
    0x0, 0x2f, 0xff, 0xe0, 0x2f, 0x32, 0x20, 0x2f,
    0x10, 0x0, 0x2f, 0x43, 0x30, 0x2f, 0xff, 0xf4,

    /* U+0046 "F" */
    0x3f, 0xff, 0xf5, 0x3f, 0x44, 0x41, 0x3f, 0x0,
    0x0, 0x3f, 0x0, 0x0, 0x3f, 0xff, 0xf1, 0x3f,
    0x43, 0x30, 0x3f, 0x0, 0x0, 0x3f, 0x0, 0x0,

    /* U+0047 "G" */
    0x6, 0xee, 0x70, 0x2f, 0x65, 0xf2, 0x4f, 0x0,
    0x62, 0x4f, 0x0, 0x0, 0x4f, 0x2f, 0xf5, 0x4f,
    0x2, 0xe5, 0x2f, 0x65, 0xf3, 0x6, 0xef, 0x70,

    /* U+0048 "H" */
    0x3f, 0x0, 0xf3, 0x3f, 0x0, 0xf3, 0x3f, 0x0,
    0xf3, 0x3f, 0xff, 0xf3, 0x3f, 0x33, 0xf3, 0x3f,
    0x0, 0xf3, 0x3f, 0x0, 0xf3, 0x3f, 0x0, 0xf3,

    /* U+0049 "I" */
    0x1f, 0xff, 0xf1, 0x3, 0xbb, 0x30, 0x0, 0xaa,
    0x0, 0x0, 0xaa, 0x0, 0x0, 0xaa, 0x0, 0x0,
    0xaa, 0x0, 0x3, 0xbb, 0x30, 0x1f, 0xff, 0xf1,

    /* U+004A "J" */
    0x0, 0x2, 0xf1, 0x0, 0x2, 0xf1, 0x0, 0x2,
    0xf1, 0x0, 0x2, 0xf1, 0x0, 0x2, 0xf1, 0x44,
    0x2, 0xf1, 0x8d, 0x39, 0xe0, 0xa, 0xfd, 0x40,

    /* U+004B "K" */
    0x3f, 0x0, 0xe6, 0x3f, 0x6, 0xe0, 0x3f, 0xd,
    0x70, 0x3f, 0xff, 0x10, 0x3f, 0x3f, 0x50, 0x3f,
    0xa, 0xb0, 0x3f, 0x4, 0xf1, 0x3f, 0x0, 0xe7,

    /* U+004C "L" */
    0xc7, 0x0, 0xc, 0x70, 0x0, 0xc7, 0x0, 0xc,
    0x70, 0x0, 0xc7, 0x0, 0xc, 0x70, 0x0, 0xc9,
    0x33, 0x1c, 0xff, 0xf9,

    /* U+004D "M" */
    0x7f, 0x44, 0xf7, 0x7d, 0x88, 0xd7, 0x7b, 0xcc,
    0xa7, 0x7a, 0xcb, 0xa7, 0x7b, 0x54, 0xb7, 0x7b,
    0x0, 0xb7, 0x7b, 0x0, 0xb7, 0x7b, 0x0, 0xb7,

    /* U+004E "N" */
    0x4f, 0x60, 0xd4, 0x4f, 0xb0, 0xd4, 0x4d, 0xe0,
    0xd4, 0x4d, 0xa5, 0xd4, 0x4d, 0x5a, 0xd4, 0x4d,
    0xe, 0xd4, 0x4d, 0xb, 0xf4, 0x4d, 0x6, 0xf4,

    /* U+004F "O" */
    0x6, 0xee, 0x60, 0x1f, 0x66, 0xf1, 0x4f, 0x0,
    0xf4, 0x4f, 0x0, 0xf4, 0x4f, 0x0, 0xf4, 0x4f,
    0x0, 0xf4, 0x1f, 0x66, 0xf1, 0x6, 0xee, 0x60,

    /* U+0050 "P" */
    0x3f, 0xff, 0x90, 0x3f, 0x24, 0xe6, 0x3f, 0x0,
    0xb9, 0x3f, 0x1, 0xe7, 0x3f, 0xff, 0xc0, 0x3f,
    0x32, 0x0, 0x3f, 0x0, 0x0, 0x3f, 0x0, 0x0,

    /* U+0051 "Q" */
    0x6, 0xee, 0x60, 0x2f, 0x55, 0xf2, 0x4f, 0x0,
    0xf4, 0x5f, 0x0, 0xf5, 0x5f, 0x0, 0xf5, 0x4f,
    0x0, 0xf4, 0x2f, 0x55, 0xf2, 0x6, 0xef, 0x80,
    0x0, 0xa, 0xa0, 0x0, 0x2, 0xf2,

    /* U+0052 "R" */
    0x3f, 0xfe, 0x80, 0x3f, 0x25, 0xf4, 0x3f, 0x0,
    0xd7, 0x3f, 0x2, 0xf4, 0x3f, 0xff, 0xb0, 0x3f,
    0x3e, 0x60, 0x3f, 0x7, 0xd0, 0x3f, 0x1, 0xf5,

    /* U+0053 "S" */
    0x7, 0xee, 0x60, 0x2f, 0x55, 0xf1, 0x3f, 0x10,
    0x20, 0xc, 0xfb, 0x30, 0x0, 0x5b, 0xf2, 0x23,
    0x0, 0xe6, 0x4f, 0x54, 0xf4, 0x7, 0xef, 0x80,

    /* U+0054 "T" */
    0x8f, 0xff, 0xf8, 0x13, 0xbb, 0x31, 0x0, 0xaa,
    0x0, 0x0, 0xaa, 0x0, 0x0, 0xaa, 0x0, 0x0,
    0xaa, 0x0, 0x0, 0xaa, 0x0, 0x0, 0xaa, 0x0,

    /* U+0055 "U" */
    0x4f, 0x0, 0xf4, 0x4f, 0x0, 0xf4, 0x4f, 0x0,
    0xf4, 0x4f, 0x0, 0xf4, 0x4f, 0x0, 0xf4, 0x4f,
    0x0, 0xf4, 0x1f, 0x66, 0xf1, 0x7, 0xee, 0x70,

    /* U+0056 "V" */
    0x8b, 0x0, 0xb8, 0x5f, 0x0, 0xe4, 0x1f, 0x22,
    0xf1, 0xd, 0x65, 0xd0, 0x9, 0x98, 0x90, 0x6,
    0xcb, 0x60, 0x2, 0xfe, 0x20, 0x0, 0xee, 0x0,

    /* U+0057 "W" */
    0xd3, 0x99, 0x3c, 0xb4, 0xaa, 0x4b, 0x96, 0xba,
    0x69, 0x87, 0xbb, 0x78, 0x69, 0xaa, 0x96, 0x5c,
    0x99, 0xc4, 0x3e, 0x77, 0xe3, 0x2f, 0x55, 0xf1,

    /* U+0058 "X" */
    0x5f, 0x10, 0xf5, 0xd, 0x77, 0xd0, 0x6, 0xee,
    0x50, 0x0, 0xee, 0x0, 0x0, 0xef, 0x10, 0x7,
    0xcd, 0x70, 0xe, 0x56, 0xe0, 0x7d, 0x0, 0xe7,

    /* U+0059 "Y" */
    0x8b, 0x0, 0xb8, 0x2f, 0x22, 0xf2, 0xb, 0x98,
    0xb0, 0x4, 0xed, 0x40, 0x0, 0xdd, 0x0, 0x0,
    0xaa, 0x0, 0x0, 0xaa, 0x0, 0x0, 0xaa, 0x0,

    /* U+005A "Z" */
    0x2f, 0xff, 0xf1, 0x3, 0x39, 0xe0, 0x0, 0xe,
    0x60, 0x0, 0x7d, 0x0, 0x1, 0xf5, 0x0, 0x8,
    0xd0, 0x0, 0x1f, 0x83, 0x30, 0x3f, 0xff, 0xf3,

    /* U+005B "[" */
    0x0, 0x0, 0x2f, 0xfa, 0x2f, 0x42, 0x2f, 0x10,
    0x2f, 0x10, 0x2f, 0x10, 0x2f, 0x10, 0x2f, 0x10,
    0x2f, 0x10, 0x2f, 0x10, 0x2f, 0xfa, 0x3, 0x32,

    /* U+005C "\\" */
    0x3f, 0x10, 0x0, 0xe, 0x60, 0x0, 0x8, 0xc0,
    0x0, 0x2, 0xf2, 0x0, 0x0, 0xd7, 0x0, 0x0,
    0x7d, 0x0, 0x0, 0x2f, 0x20, 0x0, 0xc, 0x80,
    0x0, 0x6, 0xd0, 0x0, 0x1, 0xf3,

    /* U+005D "]" */
    0x0, 0x0, 0xaf, 0xf2, 0x24, 0xf2, 0x1, 0xf2,
    0x1, 0xf2, 0x1, 0xf2, 0x1, 0xf2, 0x1, 0xf2,
    0x1, 0xf2, 0x1, 0xf2, 0xaf, 0xf2, 0x23, 0x30,

    /* U+005E "^" */
    0x0, 0xcd, 0x0, 0x3, 0xdc, 0x30, 0xa, 0x76,
    0xa0, 0x1f, 0x11, 0xf1,

    /* U+005F "_" */
    0x0, 0x0, 0x0, 0x6f, 0xff, 0xf6, 0x13, 0x33,
    0x31,

    /* U+0060 "`" */
    0x27, 0x0, 0xc8,

    /* U+0061 "a" */
    0x8, 0xee, 0x70, 0x19, 0x34, 0xf2, 0x9, 0xdd,
    0xf3, 0x5e, 0x0, 0xf3, 0x5f, 0x26, 0xf3, 0xb,
    0xf9, 0xf3,

    /* U+0062 "b" */
    0x3f, 0x0, 0x0, 0x3f, 0x0, 0x0, 0x3f, 0x9f,
    0x90, 0x3f, 0x65, 0xf2, 0x3f, 0x0, 0xf4, 0x3f,
    0x0, 0xf4, 0x3f, 0x65, 0xf2, 0x3f, 0x8f, 0x90,

    /* U+0063 "c" */
    0x6, 0xee, 0x80, 0x1f, 0x64, 0xf4, 0x3f, 0x0,
    0x10, 0x3f, 0x0, 0x10, 0x1f, 0x65, 0xf4, 0x6,
    0xef, 0x80,

    /* U+0064 "d" */
    0x0, 0x0, 0xf3, 0x0, 0x0, 0xf3, 0x9, 0xf9,
    0xf3, 0x2f, 0x56, 0xf3, 0x4f, 0x0, 0xf3, 0x4f,
    0x0, 0xf3, 0x2f, 0x56, 0xf3, 0x9, 0xf8, 0xf3,

    /* U+0065 "e" */
    0x6, 0xee, 0x70, 0x2f, 0x22, 0xf3, 0x4f, 0xdd,
    0xe4, 0x4e, 0x0, 0x0, 0x2f, 0x54, 0xc1, 0x6,
    0xee, 0x70,

    /* U+0066 "f" */
    0x0, 0x6f, 0xf5, 0x0, 0xf7, 0x20, 0x0, 0xf4,
    0x0, 0x8f, 0xff, 0xf5, 0x13, 0xf6, 0x31, 0x0,
    0xf4, 0x0, 0x0, 0xf4, 0x0, 0x0, 0xf4, 0x0,

    /* U+0067 "g" */
    0x8, 0xf9, 0xf3, 0x2f, 0x56, 0xf3, 0x4f, 0x0,
    0xf3, 0x4f, 0x0, 0xf3, 0x2f, 0x33, 0xf3, 0xb,
    0xfb, 0xf3, 0x1, 0x35, 0xf2, 0x7, 0xfe, 0x70,

    /* U+0068 "h" */
    0x3f, 0x0, 0x0, 0x3f, 0x0, 0x0, 0x3f, 0x9f,
    0x90, 0x3f, 0x66, 0xf2, 0x3f, 0x0, 0xf3, 0x3f,
    0x0, 0xf4, 0x3f, 0x0, 0xf4, 0x3f, 0x0, 0xf4,

    /* U+0069 "i" */
    0x0, 0x25, 0x0, 0x0, 0x7d, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xfe, 0x0, 0x3, 0x7e, 0x0, 0x0,
    0x5e, 0x0, 0x0, 0x5e, 0x0, 0x3, 0x7e, 0x32,
    0x3f, 0xff, 0xf9,

    /* U+006A "j" */
    0x0, 0x5, 0x20, 0x0, 0xc8, 0x0, 0x0, 0x3,
    0xff, 0xf8, 0x3, 0x3c, 0x80, 0x0, 0xb8, 0x0,
    0xb, 0x80, 0x0, 0xb8, 0x0, 0xb, 0x80, 0x34,
    0xe6, 0x3f, 0xfa, 0x0,

    /* U+006B "k" */
    0x3f, 0x10, 0x0, 0x3f, 0x10, 0x0, 0x3f, 0x11,
    0xf5, 0x3f, 0x1b, 0xb0, 0x3f, 0xff, 0x20, 0x3f,
    0x3d, 0x70, 0x3f, 0x16, 0xe0, 0x3f, 0x10, 0xe7,

    /* U+006C "l" */
    0xbf, 0xf5, 0x0, 0x23, 0xf5, 0x0, 0x0, 0xe5,
    0x0, 0x0, 0xe5, 0x0, 0x0, 0xe5, 0x0, 0x0,
    0xe5, 0x0, 0x0, 0xd9, 0x32, 0x0, 0x5e, 0xf9,

    /* U+006D "m" */
    0x8c, 0xe9, 0xe3, 0x89, 0x88, 0x98, 0x89, 0x88,
    0x98, 0x89, 0x88, 0x98, 0x89, 0x88, 0x98, 0x89,
    0x88, 0x98,

    /* U+006E "n" */
    0x3f, 0x9f, 0x90, 0x3f, 0x44, 0xf2, 0x3f, 0x0,
    0xf3, 0x3f, 0x0, 0xf4, 0x3f, 0x0, 0xf4, 0x3f,
    0x0, 0xf4,

    /* U+006F "o" */
    0x7, 0xee, 0x70, 0x2f, 0x55, 0xf2, 0x4f, 0x0,
    0xf4, 0x4f, 0x0, 0xf4, 0x2f, 0x55, 0xf2, 0x7,
    0xee, 0x70,

    /* U+0070 "p" */
    0x3f, 0x8f, 0x90, 0x3f, 0x53, 0xf2, 0x3f, 0x0,
    0xf4, 0x3f, 0x0, 0xf4, 0x3f, 0x65, 0xf2, 0x3f,
    0x8f, 0x90, 0x3f, 0x0, 0x0, 0x3f, 0x0, 0x0,

    /* U+0071 "q" */
    0x9, 0xf9, 0xf3, 0x2f, 0x56, 0xf3, 0x4f, 0x0,
    0xf3, 0x4f, 0x0, 0xf3, 0x2f, 0x56, 0xf3, 0x9,
    0xf8, 0xf3, 0x0, 0x0, 0xf3, 0x0, 0x0, 0xf3,

    /* U+0072 "r" */
    0xf, 0x9f, 0xc0, 0xf, 0x72, 0xe6, 0xf, 0x30,
    0x85, 0xf, 0x30, 0x0, 0xf, 0x30, 0x0, 0xf,
    0x30, 0x0,

    /* U+0073 "s" */
    0xa, 0xff, 0x90, 0x3f, 0x22, 0xa1, 0x1f, 0xc9,
    0x50, 0x2, 0x79, 0xf2, 0x3b, 0x22, 0xf4, 0xa,
    0xff, 0xa0,

    /* U+0074 "t" */
    0x1, 0x81, 0x0, 0x2, 0xf2, 0x0, 0xaf, 0xff,
    0xf5, 0x25, 0xf5, 0x31, 0x2, 0xf2, 0x0, 0x2,
    0xf2, 0x0, 0x1, 0xf6, 0x30, 0x0, 0x9f, 0xf4,

    /* U+0075 "u" */
    0x4f, 0x0, 0xf4, 0x4f, 0x0, 0xf4, 0x4f, 0x0,
    0xf4, 0x3f, 0x0, 0xf3, 0x1f, 0x66, 0xf1, 0x6,
    0xee, 0x60,

    /* U+0076 "v" */
    0x7d, 0x0, 0xd7, 0x2f, 0x11, 0xf2, 0xd, 0x66,
    0xd0, 0x9, 0xaa, 0x90, 0x4, 0xee, 0x40, 0x0,
    0xee, 0x0,

    /* U+0077 "w" */
    0xc3, 0x99, 0x3c, 0xa5, 0xbb, 0x59, 0x77, 0xbb,
    0x77, 0x5b, 0xaa, 0xa5, 0x3e, 0x88, 0xe2, 0xf,
    0x66, 0xf0,

    /* U+0078 "x" */
    0x3f, 0x33, 0xf3, 0x9, 0xbc, 0x90, 0x1, 0xee,
    0x10, 0x2, 0xff, 0x20, 0xb, 0xaa, 0xb0, 0x5f,
    0x11, 0xf5,

    /* U+0079 "y" */
    0x7d, 0x0, 0xd7, 0x1f, 0x32, 0xf2, 0xb, 0x87,
    0xc0, 0x5, 0xdc, 0x70, 0x0, 0xff, 0x20, 0x0,
    0xac, 0x0, 0x0, 0xd7, 0x0, 0x2, 0xf1, 0x0,

    /* U+007A "z" */
    0x2f, 0xff, 0xf1, 0x3, 0x3b, 0xd0, 0x0, 0x6e,
    0x20, 0x3, 0xf4, 0x0, 0x1e, 0x93, 0x30, 0x3f,
    0xff, 0xf3,

    /* U+007B "{" */
    0x0, 0x0, 0x0, 0x0, 0xb, 0xf1, 0x0, 0x5f,
    0x40, 0x0, 0x5e, 0x0, 0x0, 0x4f, 0x0, 0x0,
    0x6e, 0x0, 0x5f, 0xf6, 0x0, 0x13, 0x8e, 0x0,
    0x0, 0x4e, 0x0, 0x0, 0x6e, 0x10, 0x0, 0x2e,
    0xf1, 0x0, 0x0, 0x30,

    /* U+007C "|" */
    0x0, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
    0xaa, 0xaa, 0xaa,

    /* U+007D "}" */
    0x0, 0x0, 0x0, 0x1f, 0xb0, 0x0, 0x4, 0xf5,
    0x0, 0x0, 0xe5, 0x0, 0x0, 0xf4, 0x0, 0x0,
    0xf6, 0x0, 0x0, 0x7f, 0xf5, 0x0, 0xf7, 0x31,
    0x0, 0xf4, 0x0, 0x1, 0xe6, 0x0, 0x1f, 0xe2,
    0x0, 0x2, 0x0, 0x0,

    /* U+007E "~" */
    0x3d, 0xd3, 0x65, 0x69, 0x6f, 0xf4, 0x0, 0x0,
    0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 96, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 96, .box_w = 2, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 96, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 16, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 40, .adv_w = 96, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 73, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 96, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 96, .box_w = 2, .box_h = 4, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 129, .adv_w = 96, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 153, .adv_w = 96, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 177, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 195, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 96, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 219, .adv_w = 96, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 225, .adv_w = 96, .box_w = 2, .box_h = 2, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 257, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 305, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 353, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 401, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 425, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 449, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 473, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 497, .adv_w = 96, .box_w = 2, .box_h = 6, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 503, .adv_w = 96, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 515, .adv_w = 96, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 536, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 554, .adv_w = 96, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 575, .adv_w = 96, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 591, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 621, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 645, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 669, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 693, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 717, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 741, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 765, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 789, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 813, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 837, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 861, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 885, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 905, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 929, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 953, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 977, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1001, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1031, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1055, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1079, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1103, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1127, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1151, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1175, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1199, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1223, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1247, .adv_w = 96, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1271, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1301, .adv_w = 96, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1325, .adv_w = 96, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1337, .adv_w = 96, .box_w = 6, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1346, .adv_w = 96, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 1349, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1367, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1391, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1409, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1433, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1451, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1475, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1499, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1523, .adv_w = 96, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1550, .adv_w = 96, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1578, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1602, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1626, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1644, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1662, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1680, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1704, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1728, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1746, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1764, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1788, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1806, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1824, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1842, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1860, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1884, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1902, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1938, .adv_w = 96, .box_w = 2, .box_h = 11, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1949, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1985, .adv_w = 96, .box_w = 6, .box_h = 3, .ofs_x = 0, .ofs_y = 2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t Jetbrains_Momo_10 = {
#else
lv_font_t Jetbrains_Momo_10 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 12,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if JETBRAINS_MOMO_10*/

