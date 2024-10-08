#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif

/*******************************************************************************
 * Size: 24 px
 * Bpp: 3
 * Opts: --font ../font/windows/SIMYOU.TTF --symbols 周一二三四五六七八九十上午下月凌晨中晚 --size 24 --format lvgl --bpp 3 --lv-include lvgl/lvgl.h -o hansans_cn_24.c
 ******************************************************************************/

#ifndef HANSANS_CN_24
#define HANSANS_CN_24 1
#endif

#if HANSANS_CN_24

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+4E00 "一" */
    0x3f, 0xff, 0xf2, 0x20, 0x3f, 0x6f, 0xfe, 0x3c,
    0x0,

    /* U+4E03 "七" */
    0x3, 0xff, 0xa7, 0x0, 0xff, 0xe5, 0xb0, 0x3f,
    0xff, 0xe0, 0x7f, 0xf9, 0xc9, 0x27, 0x22, 0xe6,
    0x7, 0x12, 0x42, 0x5d, 0x9f, 0xb6, 0x4c, 0x46,
    0x8c, 0x4, 0xfd, 0xb2, 0x0, 0xd2, 0x37, 0xf6,
    0xb5, 0x1a, 0x2, 0x9f, 0xec, 0x23, 0x48, 0x40,
    0xff, 0xff, 0x81, 0xff, 0xff, 0x0, 0x40, 0xff,
    0xe5, 0x1c, 0x7, 0xff, 0x89, 0x10, 0x3f, 0xc4,
    0xf, 0xfb, 0x20, 0x3f, 0x97, 0x44, 0xff, 0x55,
    0x0, 0xfe, 0xae, 0xed, 0xfb, 0x8c, 0x7, 0xfd,
    0x7f, 0xfe, 0xd4, 0x81, 0x0,

    /* U+4E09 "三" */
    0x2, 0xdf, 0xff, 0xf1, 0x30, 0x1e, 0xdb, 0xff,
    0x8c, 0x7, 0xc4, 0xff, 0xf1, 0x0, 0xff, 0xff,
    0x81, 0xff, 0xe9, 0x27, 0xff, 0x88, 0x7, 0xd3,
    0x6f, 0xfe, 0x21, 0x3, 0xd3, 0xff, 0xfe, 0x21,
    0x3, 0xff, 0xfe, 0x7, 0xff, 0xf4, 0x9f, 0xfe,
    0x48, 0x3, 0xb7, 0xff, 0x28, 0x0,

    /* U+4E0A "上" */
    0x3, 0xfe, 0x40, 0x7f, 0xf2, 0x94, 0x3, 0xff,
    0xfe, 0x7, 0xff, 0xfc, 0xf, 0xfe, 0x31, 0x3f,
    0xc0, 0x7f, 0xf0, 0x8e, 0xdf, 0xc0, 0x7f, 0xf0,
    0x8f, 0xff, 0xc0, 0x7f, 0xff, 0xc0, 0xff, 0xff,
    0x81, 0xff, 0xfb, 0x27, 0xf0, 0x2, 0x7f, 0xe0,
    0x1f, 0x6f, 0xd4, 0xed, 0xff, 0x20,

    /* U+4E0B "下" */
    0x1f, 0xff, 0xf2, 0x90, 0xfb, 0x7e, 0xa7, 0x6f,
    0xf9, 0x0, 0x27, 0xf0, 0x2, 0x7f, 0xe0, 0x3f,
    0xfb, 0x4, 0x80, 0xff, 0xe5, 0xe6, 0x7, 0xff,
    0x24, 0xd9, 0x40, 0xff, 0xe4, 0xac, 0xf0, 0x1f,
    0xfc, 0x93, 0x9f, 0x20, 0x7f, 0xf2, 0x6b, 0xc8,
    0xf, 0xfe, 0x4c, 0x75, 0x1, 0xff, 0xc9, 0x91,
    0x50, 0x1f, 0xfc, 0x97, 0x58, 0x1f, 0xfc, 0xa4,
    0x40, 0xff, 0xff, 0x81, 0xff, 0xff, 0x3, 0xe6,
    0x7, 0xff, 0x2c, 0xe0, 0x3f, 0xf8, 0x0,

    /* U+4E2D "中" */
    0x3, 0xf8, 0x81, 0xff, 0xc7, 0xe8, 0xf, 0xff,
    0xd2, 0xdb, 0xe3, 0x76, 0xfa, 0x0, 0xb5, 0x27,
    0x8b, 0x93, 0xe6, 0x88, 0x69, 0x78, 0x64, 0xbe,
    0x20, 0x7f, 0xff, 0xc0, 0xff, 0xfc, 0x22, 0x7c,
    0x9, 0xfe, 0x5, 0x5d, 0xbc, 0x66, 0xdf, 0x24,
    0x17, 0xff, 0x8d, 0xff, 0xea, 0x7, 0xff, 0xfc,
    0xf, 0xfe, 0xbd, 0x40, 0x7f, 0xf1, 0x98, 0x1f,
    0xe0,

    /* U+4E5D "九" */
    0x3, 0xff, 0xa5, 0x0, 0xff, 0xe4, 0x16, 0x7,
    0xff, 0xb8, 0x9f, 0x20, 0x4f, 0x80, 0xfd, 0xf6,
    0xe8, 0x36, 0xf8, 0xf, 0xb7, 0xfd, 0x87, 0xfe,
    0x28, 0xf, 0xfe, 0x41, 0x3, 0xff, 0xae, 0xc8,
    0x1f, 0xfc, 0x82, 0xc0, 0xf1, 0x60, 0x7f, 0xf0,
    0x39, 0x3, 0xff, 0x90, 0xb0, 0x1f, 0xfc, 0x72,
    0x48, 0xf, 0xfe, 0x3d, 0x60, 0x7f, 0xf2, 0x1d,
    0x3, 0xff, 0x80, 0xe0, 0x1d, 0x59, 0x3, 0xff,
    0x82, 0x40, 0xcd, 0xa0, 0x1f, 0xfc, 0x22, 0x4,
    0xa7, 0x3, 0xff, 0x85, 0xc0, 0x95, 0xa2, 0x7,
    0xf8, 0x81, 0x2c, 0x25, 0xc8, 0xf, 0xf9, 0x92,
    0x85, 0x21, 0xe4, 0xf, 0xfa, 0xd6, 0xc5, 0x82,
    0xa0, 0x7f, 0xf0, 0x56, 0xfd, 0x88,

    /* U+4E8C "二" */
    0x3, 0x13, 0xff, 0xc4, 0x3, 0xef, 0xb7, 0xff,
    0x14, 0xf, 0x7f, 0xff, 0xc5, 0xc0, 0x7f, 0xff,
    0xc0, 0xff, 0xff, 0x81, 0xff, 0xff, 0x3, 0xff,
    0xfe, 0x7, 0xff, 0x12, 0xff, 0xff, 0xc8, 0x40,
    0x2e, 0xdf, 0xfc, 0x84, 0x0,

    /* U+4E94 "五" */
    0x0, 0x4f, 0xff, 0x1c, 0xe, 0xfb, 0x7f, 0xf1,
    0xa8, 0x1b, 0x7f, 0xea, 0x7f, 0xff, 0x50, 0x3f,
    0xfa, 0xe5, 0x81, 0xff, 0xca, 0xe4, 0xf, 0xfe,
    0x51, 0xe0, 0x7f, 0xf1, 0x49, 0xe6, 0x9, 0xf8,
    0xf, 0xed, 0xbc, 0x66, 0xdf, 0x76, 0x7, 0xdb,
    0xfe, 0x1f, 0xfe, 0x94, 0xf, 0xfe, 0x1, 0x3,
    0xf9, 0x10, 0x3f, 0xf8, 0xc, 0x81, 0xff, 0xca,
    0x2c, 0xf, 0xfe, 0x57, 0x20, 0x7f, 0xf2, 0x8f,
    0x3, 0xff, 0x94, 0xc8, 0x1f, 0xfc, 0xa2, 0x80,
    0xff, 0xe4, 0x90, 0x3f, 0xf9, 0x6c, 0x81, 0xff,
    0xc5, 0x27, 0xc0, 0x9f, 0xe6, 0x9, 0x80, 0x5d,
    0xba, 0x1d, 0xbf, 0xa8, 0xda, 0x40,

    /* U+516B "八" */
    0x3, 0xff, 0x84, 0x40, 0xff, 0xe2, 0xa0, 0x33,
    0x80, 0x7f, 0xf1, 0xd, 0x3, 0x24, 0x3, 0xff,
    0x88, 0xc8, 0x18, 0x82, 0x7, 0xff, 0xc, 0xb0,
    0x39, 0x20, 0x1f, 0xfc, 0x3e, 0x40, 0xed, 0x80,
    0x7f, 0xf0, 0xd7, 0x3, 0x92, 0x1, 0xff, 0xc3,
    0x28, 0xe, 0x21, 0x1, 0xff, 0xc1, 0x40, 0x81,
    0xe7, 0x80, 0xff, 0xe0, 0xe4, 0x7, 0xd9, 0x81,
    0xff, 0xc1, 0x58, 0xf, 0x90, 0x40, 0x7f, 0xc4,
    0x98, 0x1f, 0x9f, 0x3, 0xfe, 0xa4, 0xf, 0xea,
    0x80, 0xff, 0x9d, 0x3, 0xf8, 0xa8, 0x7, 0xf2,
    0xc, 0xf, 0xf7, 0x60, 0x7f, 0x46, 0x7, 0xfc,
    0x8c, 0x3, 0xe4, 0x60, 0x1f, 0xfc, 0x8, 0xc0,
    0xfa, 0x30, 0x3f, 0xf8, 0x28, 0xc0, 0x39, 0x18,
    0x7, 0xff, 0xb, 0xb2, 0x6, 0xb0, 0xf, 0xfe,
    0x19, 0x7c, 0xa, 0x16, 0x7, 0xff, 0x12, 0x18,
    0x1, 0xf0, 0x3f, 0xf8, 0xd9, 0x80, 0xe4, 0xf,
    0xfe, 0x31, 0xe0,

    /* U+516D "六" */
    0x3, 0xf9, 0x10, 0x3f, 0xf9, 0x3b, 0x81, 0xff,
    0xc9, 0x85, 0x1, 0xff, 0xc9, 0x90, 0x7, 0xff,
    0x25, 0x94, 0x7, 0xff, 0x26, 0x40, 0x1f, 0xf1,
    0x3f, 0xe5, 0x49, 0xfc, 0x1, 0x6d, 0xff, 0x4d,
    0xbf, 0x50, 0xbf, 0xff, 0xe4, 0x50, 0x3e, 0x2c,
    0xe, 0x34, 0xf, 0xfe, 0x12, 0xc0, 0x71, 0x70,
    0xf, 0xfe, 0xe, 0x20, 0x7b, 0xb2, 0x7, 0xff,
    0x1, 0x60, 0x3c, 0x5f, 0x3, 0xfe, 0x41, 0x1,
    0xf4, 0x2c, 0xf, 0xf7, 0x60, 0x7f, 0x58, 0x7,
    0xf1, 0x54, 0xf, 0xe4, 0x60, 0x1f, 0xba, 0x20,
    0x7f, 0xbb, 0x20, 0x79, 0x98, 0x7, 0xfc, 0x54,
    0x3, 0x8c, 0x82, 0x7, 0xff, 0x2, 0x22, 0x6,
    0xe9, 0x81, 0xff, 0xc1, 0x2e, 0x1, 0x61, 0x40,
    0xff, 0xe1, 0xd4, 0x2, 0xc, 0x7, 0xff, 0x10,
    0xa6, 0x2e, 0x3, 0xff, 0x8d, 0x58,

    /* U+51CC "凌" */
    0x3, 0xff, 0xb3, 0xc8, 0x1f, 0xf7, 0x3, 0x13,
    0xe0, 0xc9, 0xf0, 0x1c, 0x58, 0x9, 0xb7, 0x85,
    0xdb, 0xc4, 0xc, 0xb0, 0x9, 0xff, 0x86, 0xff,
    0xc4, 0xd, 0x90, 0x1f, 0xfc, 0xa4, 0x8, 0x4b,
    0xe0, 0x97, 0xe0, 0x38, 0xa4, 0x93, 0xe3, 0x64,
    0xf9, 0x1, 0x96, 0x5b, 0x6b, 0x36, 0xdd, 0x6d,
    0x90, 0x1b, 0x30, 0x32, 0x8c, 0xc, 0x56, 0x3,
    0xf2, 0xc0, 0x46, 0xd1, 0x3, 0xb3, 0xe4, 0xf,
    0xc4, 0x1d, 0x13, 0x20, 0x75, 0x78, 0x81, 0xe7,
    0xe, 0x8c, 0xc0, 0x3e, 0x91, 0x88, 0x1d, 0x8e,
    0xac, 0x41, 0xbf, 0xec, 0xda, 0x50, 0x39, 0xee,
    0x83, 0x5b, 0x7c, 0xa0, 0x70, 0xc, 0x49, 0x0,
    0x51, 0x93, 0xf9, 0x1, 0xf2, 0x20, 0xd, 0x4d,
    0x80, 0xe4, 0x90, 0xf, 0xad, 0x3, 0x9d, 0xa9,
    0x40, 0x95, 0x84, 0xf, 0x22, 0xc6, 0x90, 0x16,
    0x7d, 0x3a, 0xd8, 0xf, 0xa3, 0x1, 0x98, 0x11,
    0xca, 0xc9, 0x1, 0xf2, 0x30, 0x1, 0x3, 0x18,
    0x89, 0x46, 0x7, 0xd6, 0x1, 0xc5, 0xec, 0x57,
    0x65, 0xaf, 0x8, 0x19, 0xb0, 0x14, 0xd9, 0x56,
    0xc4, 0x1, 0x6a, 0x77, 0xa0, 0x20, 0x1b, 0xcf,
    0xa1, 0x3, 0xca, 0xfb, 0x80,

    /* U+5341 "十" */
    0x3, 0xff, 0xaf, 0x90, 0x1f, 0xff, 0xf0, 0x3f,
    0xff, 0xe0, 0x7f, 0xfa, 0xbf, 0xff, 0x1b, 0xff,
    0xf6, 0x1, 0xb7, 0xf8, 0xcd, 0xbf, 0xb8, 0x2,
    0x7f, 0xc0, 0x9f, 0xf8, 0xf, 0xff, 0xf8, 0x1f,
    0xff, 0xf0, 0x3f, 0xff, 0xe0, 0x7f, 0xf3, 0xfa,
    0x3, 0xfe,

    /* U+5348 "午" */
    0x3, 0xff, 0xa2, 0xe8, 0x1f, 0xfc, 0xac, 0x40,
    0xff, 0xe5, 0x2c, 0x7, 0xff, 0x25, 0xb, 0xff,
    0xff, 0x9, 0x1, 0xe8, 0xf6, 0xea, 0x36, 0xfc,
    0x80, 0xe8, 0x61, 0x3c, 0xc1, 0x3f, 0x80, 0xe4,
    0xe8, 0x1f, 0xfc, 0x87, 0x62, 0x3, 0xff, 0x91,
    0xeb, 0x3, 0xff, 0x93, 0x10, 0x1f, 0xfe, 0x22,
    0x97, 0xf8, 0x25, 0xfc, 0x40, 0x79, 0x3f, 0xa8,
    0x93, 0xfb, 0x80, 0xdb, 0xfd, 0xc6, 0xdf, 0xe0,
    0x3f, 0xff, 0xe0, 0x7f, 0xff, 0xc0, 0xff, 0xf5,
    0x14, 0x7, 0xff, 0x2e, 0x81, 0xff, 0x0,

    /* U+5468 "周" */
    0x3, 0x25, 0xff, 0xc5, 0x3, 0xbc, 0x9f, 0xfc,
    0x4b, 0x40, 0x48, 0xed, 0xf7, 0x5b, 0x7d, 0x50,
    0x1f, 0xfc, 0x6, 0x80, 0xf9, 0x81, 0xf8, 0x9f,
    0x2, 0x7c, 0x7, 0xf4, 0xdb, 0xa1, 0xdb, 0xc8,
    0xf, 0xd3, 0xfe, 0xa7, 0xff, 0x20, 0x3f, 0xfa,
    0x64, 0xfc, 0x9, 0xf0, 0x1f, 0x9e, 0xde, 0x87,
    0x6f, 0x80, 0xf9, 0xff, 0xff, 0xc2, 0xc0, 0x7f,
    0xc4, 0xff, 0x1, 0xff, 0xc0, 0x7f, 0x6f, 0xf0,
    0x1f, 0xf5, 0x9f, 0xff, 0x12, 0x3, 0xfc, 0x50,
    0x1f, 0xfc, 0x66, 0x7, 0xff, 0x24, 0x81, 0xff,
    0xca, 0xe4, 0x1, 0xa4, 0xff, 0x1, 0xf9, 0x70,
    0x15, 0xed, 0xfc, 0x88, 0x1e, 0x28, 0x3, 0xff,
    0xfd, 0x40, 0xf3, 0x24, 0x7, 0xff, 0x2, 0xb2,
    0x11, 0x1, 0x20, 0xf, 0xfe, 0xe, 0xd7, 0xb0,
    0x4, 0x40, 0x7f, 0xf0, 0x5d, 0xfd, 0x90,

    /* U+56DB "四" */
    0x37, 0x6f, 0xfe, 0x24, 0x10, 0x49, 0xa9, 0x92,
    0xa6, 0x4d, 0x59, 0x7d, 0x2e, 0x9, 0x60, 0x96,
    0x60, 0x7f, 0xff, 0xc0, 0xff, 0xf4, 0xb2, 0x7,
    0xff, 0x18, 0xb0, 0x3f, 0xf8, 0xd3, 0x81, 0xff,
    0xc4, 0x39, 0x20, 0x11, 0x3, 0xfe, 0x79, 0xd0,
    0x38, 0xff, 0xc0, 0x6f, 0x6c, 0x7, 0xb6, 0xf0,
    0x1b, 0xe4, 0x7, 0xe2, 0x78, 0xf, 0xff, 0x93,
    0xc4, 0xff, 0xf1, 0x0, 0x77, 0xb7, 0xff, 0x10,
    0x92, 0xff, 0xff, 0x8b, 0x80,

    /* U+665A "晚" */
    0x3, 0xff, 0xaa, 0xc8, 0x1f, 0xfc, 0x98, 0x7,
    0xff, 0x1, 0x7f, 0x98, 0x13, 0xd, 0x2e, 0x3,
    0xd1, 0xfe, 0x90, 0x5, 0xc, 0x9d, 0x78, 0x1c,
    0x68, 0x4, 0x5, 0x56, 0xde, 0x44, 0xf, 0xfe,
    0x4, 0x54, 0xe, 0x49, 0x0, 0xff, 0x9b, 0x52,
    0x79, 0xd6, 0xc4, 0xf, 0xfe, 0x5, 0xdb, 0xa0,
    0x7b, 0x3c, 0x3, 0xf3, 0x13, 0xfc, 0x6f, 0xfa,
    0xb0, 0x3f, 0xc8, 0xf, 0xf3, 0x3, 0x32, 0x4c,
    0xf, 0xc5, 0x81, 0xfd, 0x76, 0x50, 0x3f, 0xf8,
    0xfb, 0xf6, 0x2, 0x60, 0x71, 0x3, 0xff, 0x86,
    0xae, 0xd8, 0x6d, 0xe2, 0x7, 0xf5, 0xd2, 0x48,
    0xc3, 0x64, 0x5c, 0x7, 0xf8, 0xa5, 0xaa, 0x5,
    0x28, 0xf, 0xfe, 0x12, 0x2c, 0xf, 0x88, 0x1f,
    0xfc, 0x9, 0x0, 0x7e, 0xc0, 0x7f, 0xd9, 0xb0,
    0x1f, 0xe3, 0x49, 0x20, 0x23, 0x9d, 0x2, 0x20,
    0x62, 0x2, 0xbd, 0x92, 0x4, 0xd6, 0x80, 0xee,
    0x48, 0x52, 0x1f, 0xf9, 0xe1, 0xd8, 0x1d, 0x16,
    0xce, 0xe0, 0x1f, 0x68, 0x7, 0xcb, 0xfe, 0x40,

    /* U+6668 "晨" */
    0x3, 0x13, 0xff, 0xc2, 0x3, 0xf6, 0xdf, 0xfc,
    0x3f, 0x40, 0xe2, 0x5f, 0xff, 0xf0, 0xb2, 0x3,
    0xe4, 0xbf, 0xf8, 0x60, 0x7e, 0x93, 0xff, 0x85,
    0x40, 0xfd, 0xb7, 0xff, 0xb, 0x81, 0xe2, 0x3f,
    0xff, 0xe1, 0x62, 0x7, 0xbe, 0xdf, 0xfc, 0x40,
    0x3f, 0xf9, 0x44, 0x80, 0xd7, 0xed, 0xff, 0xc5,
    0x60, 0x12, 0x6f, 0xff, 0xf8, 0xac, 0x8, 0x99,
    0x2f, 0xfe, 0x10, 0x1f, 0xac, 0x9f, 0xfc, 0x26,
    0x7, 0xd3, 0x6f, 0xfe, 0x13, 0x3, 0x8f, 0xff,
    0xfc, 0x6c, 0x4, 0x76, 0x51, 0xb1, 0x1d, 0xbf,
    0xe0, 0x31, 0x26, 0x9, 0x51, 0x49, 0xe1, 0x99,
    0x2, 0x2c, 0xf, 0xb2, 0xa0, 0x47, 0x34, 0x6,
    0xe4, 0xf, 0xd9, 0xe3, 0x34, 0x80, 0x39, 0x70,
    0x3f, 0x3f, 0x73, 0x8c, 0xf, 0x14, 0x6, 0x4e,
    0xfa, 0x1f, 0x73, 0x44, 0x5, 0x11, 0x0, 0x4a,
    0xd1, 0xd8, 0x40, 0x4f, 0x4, 0xfc, 0x2c, 0x3,
    0x6f, 0xa1, 0x3, 0xca, 0x6f, 0xc0,

    /* U+6708 "月" */
    0x3, 0xc4, 0xff, 0xf0, 0x0, 0xfa, 0x7d, 0xbf,
    0xf8, 0x1e, 0x1, 0xca, 0x7f, 0xff, 0xc0, 0xac,
    0xe, 0x28, 0xf, 0xfe, 0x3, 0x3, 0xff, 0xca,
    0xc9, 0xff, 0xe0, 0x30, 0x3e, 0xbb, 0x7f, 0xf0,
    0x28, 0x1f, 0x6f, 0xff, 0xf8, 0x18, 0xf, 0xff,
    0xd3, 0x27, 0xff, 0x80, 0xc0, 0xfa, 0xed, 0xff,
    0xc0, 0xa0, 0x7d, 0xbf, 0xff, 0xe0, 0x60, 0x3f,
    0xf9, 0xc4, 0x10, 0x3f, 0xf8, 0xc8, 0x81, 0xff,
    0xc7, 0xa8, 0xf, 0xfe, 0x32, 0x30, 0xf, 0xfe,
    0x29, 0xb0, 0xf, 0xc7, 0xd4, 0x4a, 0x20, 0x72,
    0x60, 0x7e, 0x3c, 0xcd, 0x82, 0x0, 0x94, 0xf,
    0xfa, 0x6f, 0xd4, 0x80
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 384, .box_w = 23, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 9, .adv_w = 384, .box_w = 24, .box_h = 24, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 86, .adv_w = 384, .box_w = 24, .box_h = 19, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 132, .adv_w = 384, .box_w = 24, .box_h = 22, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 178, .adv_w = 384, .box_w = 24, .box_h = 22, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 249, .adv_w = 384, .box_w = 20, .box_h = 25, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 306, .adv_w = 384, .box_w = 22, .box_h = 24, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 408, .adv_w = 384, .box_w = 24, .box_h = 18, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 445, .adv_w = 384, .box_w = 24, .box_h = 21, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 539, .adv_w = 384, .box_w = 24, .box_h = 23, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 670, .adv_w = 384, .box_w = 23, .box_h = 23, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 788, .adv_w = 384, .box_w = 24, .box_h = 24, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 953, .adv_w = 384, .box_w = 24, .box_h = 24, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 995, .adv_w = 384, .box_w = 24, .box_h = 25, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 1074, .adv_w = 384, .box_w = 23, .box_h = 23, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1193, .adv_w = 384, .box_w = 20, .box_h = 22, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 1262, .adv_w = 384, .box_w = 23, .box_h = 24, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1406, .adv_w = 384, .box_w = 23, .box_h = 23, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1540, .adv_w = 384, .box_w = 21, .box_h = 23, .ofs_x = 0, .ofs_y = -4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x3, 0x9, 0xa, 0xb, 0x2d, 0x5d, 0x8c,
    0x94, 0x36b, 0x36d, 0x3cc, 0x541, 0x548, 0x668, 0x8db,
    0x185a, 0x1868, 0x1908
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 19968, .range_length = 6409, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 19, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 3,
    .kern_classes = 0,
    .bitmap_format = 1
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t hansans_cn_24 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 25,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if HANSANS_CN_24*/

