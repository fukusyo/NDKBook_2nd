typedef struct {
  int x;
  int y;
  int width;
  int height;
  int x_bearing;
  int y_bearing;
  int x_advance;
} glyph;

glyph glyphlist[] = {
{ 0, 0, 0, 0 },
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /* 	 */
{ 0, 0, 0, 0 }, /*   */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*   */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 0, 0, 0, 0 }, /*  */
{ 180, 0, 0, 0, 0, 0, 16 }, /*   */
{ 0, 0, 0, 0 }, /* ! */
{ 0, 0, 0, 0 }, /* " */
{ 0, 0, 0, 0 }, /* # */
{ 0, 96, 14, 29, 1, -28, 16 }, /* $ */
{ 0, 0, 0, 0 }, /* % */
{ 0, 0, 0, 0 }, /* & */
{ 0, 0, 0, 0 }, /* ' */
{ 54, 96, 10, 30, 4, -28, 16 }, /* ( */
{ 72, 96, 10, 30, 2, -28, 16 }, /* ) */
{ 216, 64, 14, 17, 1, -21, 16 }, /* * */
{ 162, 64, 14, 21, 1, -24, 16 }, /* + */
{ 18, 96, 7, 10, 1, -6, 16 }, /* , */
{ 180, 64, 14, 21, 1, -24, 16 }, /* - */
{ 36, 96, 6, 5, 2, -5, 16 }, /* . */
{ 198, 64, 16, 31, 0, -28, 16 }, /* / */
{ 0, 0, 14, 24, 1, -25, 16 }, /* 0 */
{ 18, 0, 7, 23, 3, -25, 16 }, /* 1 */
{ 36, 0, 14, 23, 1, -25, 16 }, /* 2 */
{ 54, 0, 14, 24, 1, -25, 16 }, /* 3 */
{ 72, 0, 16, 23, 0, -25, 16 }, /* 4 */
{ 90, 0, 14, 24, 1, -25, 16 }, /* 5 */
{ 108, 0, 14, 24, 1, -25, 16 }, /* 6 */
{ 126, 0, 14, 23, 1, -25, 16 }, /* 7 */
{ 144, 0, 14, 24, 1, -25, 16 }, /* 8 */
{ 162, 0, 14, 24, 1, -25, 16 }, /* 9 */
{ 234, 64, 4, 16, 6, -18, 16 }, /* : */
{ 0, 0, 0, 0 }, /* ; */
{ 0, 0, 0, 0 }, /* < */
{ 90, 96, 14, 20, 1, -17, 16 }, /* = */
{ 0, 0, 0, 0 }, /* > */
{ 0, 0, 0, 0 }, /* ? */
{ 0, 0, 0, 0 }, /* @ */
{ 198, 0, 16, 23, 0, -25, 16 }, /* A */
{ 216, 0, 13, 23, 2, -25, 16 }, /* B */
{ 234, 0, 14, 24, 1, -25, 16 }, /* C */
{ 0, 32, 15, 23, 0, -25, 16 }, /* D */
{ 18, 32, 13, 23, 2, -25, 16 }, /* E */
{ 36, 32, 12, 23, 2, -25, 16 }, /* F */
{ 54, 32, 14, 24, 1, -25, 16 }, /* G */
{ 72, 32, 14, 23, 1, -25, 16 }, /* H */
{ 90, 32, 10, 23, 3, -25, 16 }, /* I */
{ 108, 32, 12, 24, 1, -25, 16 }, /* J */
{ 126, 32, 13, 23, 2, -25, 16 }, /* K */
{ 144, 32, 13, 23, 2, -25, 16 }, /* L */
{ 162, 32, 14, 23, 1, -25, 16 }, /* M */
{ 180, 32, 14, 23, 1, -25, 16 }, /* N */
{ 198, 32, 14, 24, 1, -25, 16 }, /* O */
{ 216, 32, 13, 23, 2, -25, 16 }, /* P */
{ 234, 32, 14, 26, 1, -25, 16 }, /* Q */
{ 0, 64, 13, 23, 2, -25, 16 }, /* R */
{ 18, 64, 14, 24, 1, -25, 16 }, /* S */
{ 36, 64, 14, 23, 1, -25, 16 }, /* T */
{ 54, 64, 14, 24, 1, -25, 16 }, /* U */
{ 72, 64, 14, 23, 1, -25, 16 }, /* V */
{ 90, 64, 16, 23, 0, -25, 16 }, /* W */
{ 108, 64, 14, 23, 1, -25, 16 }, /* X */
{ 126, 64, 16, 23, 0, -25, 16 }, /* Y */
{ 144, 64, 13, 23, 2, -25, 16 }, /* Z */
{ 0, 0, 0, 0 }, /* [ */
{ 0, 0, 0, 0 }, /* \ */
{ 0, 0, 0, 0 }, /* ] */
{ 0, 0, 0, 0 }, /* ^ */
{ 0, 0, 0, 0 }, /* _ */
{ 0, 0, 0, 0 }, /* ` */
{ 0, 0, 0, 0 }, /* a */
{ 0, 0, 0, 0 }, /* b */
{ 0, 0, 0, 0 }, /* c */
{ 0, 0, 0, 0 }, /* d */
{ 0, 0, 0, 0 }, /* e */
{ 0, 0, 0, 0 }, /* f */
{ 0, 0, 0, 0 }, /* g */
{ 0, 0, 0, 0 }, /* h */
{ 0, 0, 0, 0 }, /* i */
{ 0, 0, 0, 0 }, /* j */
{ 0, 0, 0, 0 }, /* k */
{ 0, 0, 0, 0 }, /* l */
{ 0, 0, 0, 0 }, /* m */
{ 0, 0, 0, 0 }, /* n */
{ 0, 0, 0, 0 }, /* o */
{ 0, 0, 0, 0 }, /* p */
{ 0, 0, 0, 0 }, /* q */
{ 0, 0, 0, 0 }, /* r */
{ 0, 0, 0, 0 }, /* s */
{ 0, 0, 0, 0 }, /* t */
{ 0, 0, 0, 0 }, /* u */
{ 0, 0, 0, 0 }, /* v */
{ 0, 0, 0, 0 }, /* w */
{ 0, 0, 0, 0 }, /* x */
{ 0, 0, 0, 0 }, /* y */
{ 0, 0, 0, 0 }, /* z */
{ 0, 0, 0, 0 }, /* { */
{ 0, 0, 0, 0 }, /* | */
{ 0, 0, 0, 0 }, /* } */
{ 0, 0, 0, 0 }, /* ~ */
{ 0, 0, 0, 0 }, /*  */
};