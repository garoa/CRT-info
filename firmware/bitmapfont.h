// (c) Felipe Sanches <juca@members.fsf.org>
// Released under the terms of the GNU General Public License v3 (or later)

const unsigned char bitmap_font[] = {
// Space (also used for missing glyphs) [0x20 in ASCII]
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
// Exclamation
	0b00110000,
	0b00110000,
	0b00110000,
	0b00110000,
	0b00000000,
	0b00110000,
	0b00110000,
	0b00000000,
// Double Quote
	0b11011000,
	0b11011000,
	0b01001000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
// Number Sign
	0b01010000,
	0b01010000,
	0b11111000,
	0b01010000,
	0b11111000,
	0b01010000,
	0b01010000,
	0b00000000,
// Dollar Sign
	0b01110000,
	0b10101000,
	0b10100000,
	0b01110000,
	0b00101000,
	0b10101000,
	0b11110000,
	0b00000000,
// Percent Sign
	0b11001000,
	0b11001000,
	0b00010000,
	0b00100000,
	0b01000000,
	0b10011000,
	0b10011000,
	0b00000000,
// FIXME missing &
	0b11111100,
	0b01010100,
	0b01011100,
	0b00000000,
	0b11011100,
	0b10110100,
	0b11011100,
	0b00000000,
// Single Quote
	0b00110000,
	0b00110000,
	0b00010000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
// Left Parenthesis
	0b00110000,
	0b01000000,
	0b10000000,
	0b10000000,
	0b10000000,
	0b01000000,
	0b00110000,
	0b00000000,
// Right Parentesis
	0b01100000,
	0b00010000,
	0b00001000,
	0b00001000,
	0b00001000,
	0b00010000,
	0b01100000,
	0b00000000,
// Asterisk
	0b00000000,
	0b10101000,
	0b01110000,
	0b11111000,
	0b01110000,
	0b10101000,
	0b00000000,
	0b00000000,
// Plus Sign
	0b00000000,
	0b00100000,
	0b00100000,
	0b11111000,
	0b00100000,
	0b00100000,
	0b00000000,
	0b00000000,
// Comma
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00110000,
	0b00110000,
	0b00010000,
// Minus Sign
	0b00000000,
	0b00000000,
	0b00000000,
	0b11111000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
// Period '.':
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00110000,
	0b00110000,
	0b00000000,
// Solidus (Slash)
	0b00001000,
	0b00001000,
	0b00010000,
	0b00100000,
	0b01000000,
	0b10000000,
	0b10000000,
	0b00000000,
// 0:
	0b01110000,
	0b10011000,
	0b10101000,
	0b10101000,
	0b10101000,
	0b11001000,
	0b01110000,
	0b00000000,
// 1:
	0b00100000,
	0b01100000,
	0b00100000,
	0b00100000,
	0b00100000,
	0b00100000,
	0b01110000,
	0b00000000,
// 2:
	0b01110000,
	0b10001000,
	0b10001000,
	0b00010000,
	0b00100000,
	0b01001000,
	0b11111000,
	0b00000000,
// 3:
	0b01110000,
	0b10001000,
	0b00001000,
	0b00110000,
	0b00001000,
	0b10001000,
	0b01110000,
	0b00000000,
// 4:
	0b01001000,
	0b01001000,
	0b10001000,
	0b11111000,
	0b00001000,
	0b00001000,
	0b00001000,
	0b00000000,
// 5:
	0b11111000,
	0b10001000,
	0b10000000,
	0b11110000,
	0b00001000,
	0b10001000,
	0b01110000,
	0b00000000,
// 6:
	0b00111000,
	0b01000000,
	0b10000000,
	0b11110000,
	0b10001000,
	0b10001000,
	0b01110000,
	0b00000000,
// 7:
	0b11111000,
	0b10001000,
	0b00001000,
	0b00010000,
	0b00100000,
	0b01000000,
	0b10000000,
	0b00000000,
// 8:
	0b01110000,
	0b10001000,
	0b10001000,
	0b01110000,
	0b10001000,
	0b10001000,
	0b01110000,
	0b00000000,
// 9:
	0b01110000,
	0b10001000,
	0b10001000,
	0b01111000,
	0b00001000,
	0b00010000,
	0b11100000,
	0b00000000,
// Colon
	0b00000000,
	0b00000000,
	0b00110000,
	0b00110000,
	0b00000000,
	0b00110000,
	0b00110000,
	0b00000000,
// Semicolon
	0b00000000,
	0b00000000,
	0b00110000,
	0b00110000,
	0b00000000,
	0b00110000,
	0b00110000,
	0b00010000,
// Less-Than Sign
	0b00010000,
	0b00100000,
	0b01000000,
	0b10000000,
	0b01000000,
	0b00100000,
	0b00010000,
	0b00000000,
// Equals Sign
	0b00000000,
	0b00000000,
	0b11111000,
	0b00000000,
	0b11111000,
	0b00000000,
	0b00000000,
	0b00000000,
// Greater-Than Sign
	0b01000000,
	0b00100000,
	0b00010000,
	0b00001000,
	0b00010000,
	0b00100000,
	0b01000000,
	0b00000000,
// FIXME missing ?
	0b11111100,
	0b01010100,
	0b01011100,
	0b00000000,
	0b11011100,
	0b10110100,
	0b11011100,
	0b00000000,
// FIXME missing @
	0b11111100,
	0b01010100,
	0b01011100,
	0b00000000,
	0b11011100,
	0b10110100,
	0b11011100,
	0b00000000,
// A:
	0b00100000,
	0b00100000,
	0b01010000,
	0b01010000,
	0b11111000,
	0b10001000,
	0b10001000,
	0b00000000,
// B:
	0b11100000,
	0b10010000,
	0b10100000,
	0b11110000,
	0b10001000,
	0b10001000,
	0b11110000,
	0b00000000,
// C:
	0b00110000,
	0b01001000,
	0b10000000,
	0b10000000,
	0b10000000,
	0b01001000,
	0b00110000,
	0b00000000,
// D:
	0b11110000,
	0b01001000,
	0b01001000,
	0b01001000,
	0b01001000,
	0b01001000,
	0b11110000,
	0b00000000,
// E:
	0b11110000,
	0b01001000,
	0b01000000,
	0b01110000,
	0b01000000,
	0b01001000,
	0b11111000,
	0b00000000,
// F:
	0b11110000,
	0b01001000,
	0b01000000,
	0b01110000,
	0b01000000,
	0b01000000,
	0b11100000,
	0b00000000,
// G:
	0b01110000,
	0b10001000,
	0b10000000,
	0b10111000,
	0b10001000,
	0b10001000,
	0b01110000,
	0b00000000,
// H:
	0b10001000,
	0b10001000,
	0b10001000,
	0b11111000,
	0b10001000,
	0b10001000,
	0b10001000,
	0b00000000,
// I:
	0b01110000,
	0b00100000,
	0b00100000,
	0b00100000,
	0b00100000,
	0b00100000,
	0b01110000,
	0b00000000,
// J:
	0b00111000,
	0b00001000,
	0b00001000,
	0b00001000,
	0b10001000,
	0b10001000,
	0b01110000,
	0b00000000,
// K:
	0b10001000,
	0b10010000,
	0b10100000,
	0b11000000,
	0b10110000,
	0b10001000,
	0b10001000,
	0b00000000,
// L:
	0b11100000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b01001000,
	0b11111000,
	0b00000000,
// M:
	0b10001000,
	0b11011000,
	0b11011000,
	0b10101000,
	0b10101000,
	0b10001000,
	0b10001000,
	0b00000000,
// N:
	0b10001000,
	0b11001000,
	0b11001000,
	0b10101000,
	0b10011000,
	0b10011000,
	0b10001000,
	0b00000000,
// O:
	0b01110000,
	0b10001000,
	0b10001000,
	0b10001000,
	0b10001000,
	0b10001000,
	0b01110000,
	0b00000000,
// P:
	0b11110000,
	0b01001000,
	0b01001000,
	0b01110000,
	0b01000000,
	0b01000000,
	0b11100000,
	0b00000000,
// Q:
	0b01110000,
	0b10001000,
	0b10001000,
	0b10001000,
	0b10101000,
	0b10010000,
	0b01101000,
	0b00000000,
// R:
	0b11110000,
	0b10001000,
	0b10001000,
	0b11110000,
	0b10010000,
	0b10001000,
	0b10001000,
	0b00000000,
// S:
	0b01110000,
	0b10001000,
	0b10000000,
	0b01110000,
	0b00001000,
	0b10001000,
	0b11110000,
	0b00000000,
// T:
	0b11111000,
	0b10101000,
	0b00100000,
	0b00100000,
	0b00100000,
	0b00100000,
	0b01110000,
	0b00000000,
// U:
	0b10001000,
	0b10001000,
	0b10001000,
	0b10001000,
	0b10001000,
	0b10001000,
	0b01110000,
	0b00000000,
// V:
	0b10001000,
	0b10001000,
	0b10001000,
	0b10001000,
	0b01010000,
	0b01010000,
	0b00100000,
	0b00000000,
// W:
	0b10001000,
	0b10001000,
	0b10001000,
	0b10101000,
	0b10101000,
	0b01010000,
	0b01010000,
	0b00000000,
// X:
	0b10001000,
	0b10001000,
	0b01010000,
	0b00100000,
	0b01010000,
	0b10001000,
	0b10001000,
	0b00000000,
// Y:
	0b10001000,
	0b10001000,
	0b01010000,
	0b01010000,
	0b00100000,
	0b00100000,
	0b00100000,
	0b00000000,
// Z:
	0b11111000,
	0b10001000,
	0b00010000,
	0b00100000,
	0b01000000,
	0b10001000,
	0b11111000,
	0b00000000,
// Left Square Bracket
	0b11100000,
	0b10000000,
	0b10000000,
	0b10000000,
	0b10000000,
	0b10000000,
	0b11100000,
	0b00000000,
// Reverse Solidus
	0b10000000,
	0b10000000,
	0b01000000,
	0b00100000,
	0b00010000,
	0b00001000,
	0b00001000,
	0b00000000,
// Right Square Bracket
	0b00111000,
	0b00001000,
	0b00001000,
	0b00001000,
	0b00001000,
	0b00001000,
	0b00111000,
	0b00000000,
// Circumflex Accent
	0b00100000,
	0b01010000,
	0b10001000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
// Low Line
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b11111000,
	0b00000000,
// Grave Accent
	0b10000000,
	0b01000000,
	0b00100000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
// a:
	0b00000000,
	0b00000000,
	0b01110000,
	0b00001000,
	0b01111000,
	0b10011000,
	0b01101000,
	0b00000000,
// b:
	0b11000000,
	0b01000000,
	0b01000000,
	0b01110000,
	0b01001000,
	0b01001000,
	0b01110000,
	0b00000000,
// c:
	0b00000000,
	0b00000000,
	0b00000000,
	0b01111000,
	0b10000000,
	0b10000000,
	0b01111000,
	0b00000000,
// d:
	0b00011000,
	0b00010000,
	0b00010000,
	0b01110000,
	0b10010000,
	0b10010000,
	0b01110000,
	0b00000000,
// e:
	0b00000000,
	0b00000000,
	0b01110000,
	0b10001000,
	0b11111000,
	0b10000000,
	0b01111000,
	0b00000000,
// f:
	0b00000000,
	0b00111000,
	0b01000000,
	0b01000000,
	0b11110000,
	0b01000000,
	0b01000000,
	0b01000000,
// g:
	0b00000000,
	0b00000000,
	0b01111000,
	0b10001000,
	0b01111000,
	0b00001000,
	0b00001000,
	0b01110000,
// h:
	0b11000000,
	0b01000000,
	0b01000000,
	0b01110000,
	0b01001000,
	0b01001000,
	0b01001000,
	0b00000000,
// i:
	0b00000000,
	0b01100000,
	0b00000000,
	0b01100000,
	0b00100000,
	0b00100000,
	0b00110000,
	0b00000000,
// j:
	0b00110000,
	0b00000000,
	0b00110000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b11100000,
// k:
	0b11000000,
	0b01000000,
	0b01001000,
	0b01010000,
	0b01110000,
	0b01001000,
	0b01001000,
	0b00000000,
// l:
	0b01100000,
	0b00100000,
	0b00100000,
	0b00100000,
	0b00100000,
	0b00100000,
	0b00110000,
	0b00000000,
// m:
	0b00000000,
	0b00000000,
	0b00000000,
	0b11110000,
	0b10101000,
	0b10101000,
	0b10101000,
	0b00000000,
// n:
	0b00000000,
	0b00000000,
	0b00000000,
	0b11110000,
	0b01001000,
	0b01001000,
	0b01001000,
	0b00000000,
// o:
	0b00000000,
	0b00000000,
	0b00000000,
	0b01110000,
	0b10001000,
	0b10001000,
	0b01110000,
	0b00000000,
// p:
	0b00000000,
	0b00000000,
	0b11110000,
	0b01001000,
	0b01001000,
	0b01110000,
	0b01000000,
	0b01000000,
// q:
	0b00000000,
	0b00000000,
	0b01111000,
	0b10010000,
	0b10010000,
	0b01110000,
	0b00010000,
	0b00010000,
// r:
	0b00000000,
	0b00000000,
	0b01011000,
	0b01100000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b00000000,
// s:
	0b00000000,
	0b00000000,
	0b00111000,
	0b01000000,
	0b00110000,
	0b00001000,
	0b01110000,
	0b00000000,
// t:
	0b01000000,
	0b01000000,
	0b11110000,
	0b01000000,
	0b01000000,
	0b01000000,
	0b00111000,
	0b00000000,
// u:
	0b00000000,
	0b00000000,
	0b00000000,
	0b10001000,
	0b10001000,
	0b10011000,
	0b01101000,
	0b00000000,
// v:
	0b00000000,
	0b00000000,
	0b10001000,
	0b10001000,
	0b10001000,
	0b01010000,
	0b00100000,
	0b00000000,
// w:
	0b00000000,
	0b00000000,
	0b10001000,
	0b10101000,
	0b10101000,
	0b01010000,
	0b01010000,
	0b00000000,
// x:
	0b00000000,
	0b00000000,
	0b10001000,
	0b01010000,
	0b00100000,
	0b01010000,
	0b10001000,
	0b00000000,
// y:
	0b00000000,
	0b00000000,
	0b10001000,
	0b10001000,
	0b01111000,
	0b00001000,
	0b00010000,
	0b11100000,
// z:
	0b00000000,
	0b00000000,
	0b11111000,
	0b00010000,
	0b00100000,
	0b01000000,
	0b11111000,
	0b00000000,
// Left Curly Bracket
	0b00011000,
	0b00100000,
	0b00100000,
	0b11000000,
	0b00100000,
	0b00100000,
	0b00011000,
	0b00000000,
// Vertical Line
	0b00100000,
	0b00100000,
	0b00100000,
	0b00100000,
	0b00100000,
	0b00100000,
	0b00100000,
	0b00000000,
// Right Curly Bracket
	0b11000000,
	0b00100000,
	0b00100000,
	0b00011000,
	0b00100000,
	0b00100000,
	0b11000000,
	0b00000000,
// Tilde
	0b00000000,
	0b00000000,
	0b00000000,
	0b01101000,
	0b10010000,
	0b00000000,
	0b00000000,
	0b00000000,
};
// FIXME is there a way to define the following as a symbol?
#define bitmap_font_end (bitmap_font+sizeof(bitmap_font))
