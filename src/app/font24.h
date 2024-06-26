// Created by http://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!
const uint8_t Dialog_plain_24Bitmaps[] = {

	// Bitmap Data:
	0x00, // ' '
	0xFF,0xFF,0xFF,0x03,0xF0, // '!'
	0xCF,0x3C,0xF3,0xCF,0x3C,0xC0, // '"'
	0x03,0x08,0x03,0x18,0x03,0x18,0x03,0x18,0x02,0x18,0x7F,0xFF,0x7F,0xFF,0x06,0x30,0x04,0x30,0x0C,0x20,0x0C,0x60,0xFF,0xFE,0xFF,0xFE,0x18,0x40,0x18,0xC0,0x18,0xC0,0x18,0xC0,0x10,0xC0, // '#'
	0x04,0x00,0x80,0x10,0x0F,0xC7,0xFD,0xC8,0xB1,0x06,0x20,0xE4,0x0F,0x80,0xFE,0x03,0xE0,0x4E,0x08,0xC1,0x1C,0x27,0xFF,0xC7,0xE0,0x10,0x02,0x00,0x40,0x08,0x00, // '$'
	0x3C,0x03,0x06,0x60,0x70,0xC3,0x06,0x0C,0x30,0xC0,0xC3,0x1C,0x0C,0x31,0x80,0xC3,0x38,0x0C,0x33,0x00,0x66,0x63,0xC3,0xC6,0x66,0x00,0xCC,0x30,0x1C,0xC3,0x01,0x8C,0x30,0x38,0xC3,0x03,0x0C,0x30,0x60,0xC3,0x0E,0x06,0x60,0xC0,0x3C, // '%'
	0x0F,0xC0,0x1F,0xE0,0x38,0x20,0x30,0x00,0x30,0x00,0x30,0x00,0x38,0x00,0x1C,0x00,0x3E,0x00,0x77,0x06,0xE3,0x86,0xC1,0xCC,0xC0,0xEC,0xC0,0x78,0xE0,0x38,0x70,0xFC,0x3F,0xCE,0x0F,0x87, // '&'
	0xFF,0xFC, // '''
	0x19,0x8C,0xC6,0x33,0x18,0xC6,0x31,0x8C,0x63,0x0C,0x63,0x0C,0x61,0x80, // '('
	0xC3,0x18,0x63,0x18,0x63,0x18,0xC6,0x31,0x8C,0x66,0x31,0x98,0xCC,0x00, // ')'
	0x04,0x00,0x83,0x11,0xBA,0xE1,0xF0,0x3E,0x1D,0x76,0x23,0x04,0x00,0x80, // '*'
	0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0xFF,0xFF,0xFF,0xFF,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80, // '+'
	0x6D,0xBD,0x80, // ','
	0xFF,0xF0, // '-'
	0xFC, // '.'
	0x03,0x07,0x06,0x06,0x06,0x0C,0x0C,0x0C,0x1C,0x18,0x18,0x38,0x30,0x30,0x30,0x60,0x60,0x60,0xE0,0xC0, // '/'
	0x0F,0x03,0xFC,0x70,0xE6,0x06,0x60,0x6C,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x36,0x06,0x60,0x67,0x0E,0x3F,0xC0,0xF0, // '0'
	0x3C,0x3F,0x0C,0xC0,0x30,0x0C,0x03,0x00,0xC0,0x30,0x0C,0x03,0x00,0xC0,0x30,0x0C,0x03,0x00,0xC0,0x30,0xFF,0xFF,0xF0, // '1'
	0x3F,0x1F,0xFB,0x07,0x00,0x70,0x06,0x00,0xC0,0x18,0x06,0x01,0xC0,0x30,0x0C,0x03,0x00,0xC0,0x30,0x0C,0x07,0x00,0xFF,0xFF,0xFC, // '2'
	0x3F,0x07,0xFC,0x40,0xC0,0x06,0x00,0x60,0x06,0x00,0x60,0x0C,0x1F,0x81,0xFC,0x00,0xE0,0x07,0x00,0x30,0x03,0x00,0x78,0x0E,0xFF,0xC3,0xF8, // '3'
	0x01,0xC0,0x1E,0x00,0xB0,0x0D,0x80,0xCC,0x06,0x60,0x63,0x07,0x18,0x30,0xC3,0x06,0x18,0x31,0x81,0x8F,0xFF,0xFF,0xFC,0x03,0x00,0x18,0x00,0xC0,0x06,0x00, // '4'
	0x7F,0xCF,0xF9,0x80,0x30,0x06,0x00,0xC0,0x1F,0xC3,0xFC,0x41,0xC0,0x1C,0x01,0x80,0x30,0x06,0x00,0xC0,0x3C,0x0E,0xFF,0x8F,0xC0, // '5'
	0x07,0xC1,0xFE,0x38,0x27,0x00,0x60,0x0C,0x00,0xCF,0x8D,0xFC,0xF8,0xEF,0x07,0xE0,0x3E,0x03,0xE0,0x36,0x03,0x70,0x77,0x8E,0x3F,0xC0,0xF8, // '6'
	0xFF,0xFF,0xFC,0x03,0x00,0x60,0x1C,0x03,0x00,0x60,0x18,0x03,0x00,0xE0,0x18,0x03,0x00,0xC0,0x18,0x07,0x00,0xC0,0x18,0x06,0x00, // '7'
	0x1F,0x87,0xFE,0x70,0xEC,0x03,0xC0,0x3C,0x03,0xC0,0x37,0x0E,0x3F,0xC3,0xFC,0x70,0xEC,0x03,0xC0,0x3C,0x03,0xC0,0x37,0x0E,0x7F,0xE1,0xF8, // '8'
	0x1F,0x03,0xFC,0x71,0xEE,0x0E,0xC0,0x6C,0x07,0xC0,0x7C,0x07,0xE0,0xF7,0x1F,0x3F,0xB1,0xF3,0x00,0x30,0x06,0x00,0xE4,0x1C,0x7F,0x83,0xE0, // '9'
	0xFC,0x00,0x3F, // ':'
	0x6D,0x80,0x00,0x0D,0xB7,0xB0, // ';'
	0x00,0x02,0x00,0x3C,0x03,0xF0,0x3F,0x01,0xF8,0x1F,0x80,0x38,0x00,0x7E,0x00,0x1F,0x80,0x0F,0xC0,0x03,0xF0,0x00,0xF0,0x00,0x20, // '<'
	0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0x80, // '='
	0x80,0x01,0xE0,0x01,0xF8,0x00,0x7E,0x00,0x3F,0x00,0x0F,0xC0,0x03,0x80,0x3F,0x03,0xF0,0x1F,0x81,0xF8,0x07,0x80,0x08,0x00,0x00, // '>'
	0x3E,0x3F,0xB0,0xF0,0x30,0x18,0x0C,0x0C,0x0E,0x0E,0x0E,0x06,0x03,0x01,0x80,0x00,0x00,0x30,0x18,0x0C,0x00, // '?'
	0x00,0xFC,0x00,0x3F,0xF8,0x03,0xC0,0xF0,0x38,0x01,0xC3,0x00,0x07,0x38,0x79,0x99,0x8F,0xFC,0xFC,0x71,0xE3,0xC6,0x07,0x1E,0x30,0x18,0xF1,0x80,0xC7,0x8C,0x06,0x3C,0x60,0x73,0x71,0xC7,0xB9,0x8F,0xFF,0x8E,0x1E,0x70,0x38,0x00,0x00,0xE0,0x04,0x03,0xC0,0xE0,0x0F,0xFE,0x00,0x1F,0xC0,0x00, // '@'
	0x03,0xC0,0x03,0xC0,0x03,0xC0,0x07,0xE0,0x06,0x60,0x06,0x60,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x18,0x18,0x18,0x18,0x38,0x1C,0x3F,0xFC,0x3F,0xFC,0x60,0x06,0x60,0x06,0x60,0x06,0xC0,0x03, // 'A'
	0xFF,0x0F,0xFC,0xC0,0xEC,0x06,0xC0,0x6C,0x06,0xC0,0x6C,0x0C,0xFF,0x8F,0xFC,0xC0,0x6C,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x06,0xFF,0xEF,0xF8, // 'B'
	0x07,0xE0,0x7F,0xE3,0xC1,0xDC,0x01,0x60,0x03,0x80,0x0C,0x00,0x30,0x00,0xC0,0x03,0x00,0x0C,0x00,0x30,0x00,0xE0,0x01,0x80,0x07,0x00,0x4F,0x07,0x1F,0xF8,0x1F,0x80, // 'C'
	0xFF,0x81,0xFF,0xE3,0x01,0xE6,0x00,0xEC,0x00,0xD8,0x01,0xF0,0x01,0xE0,0x03,0xC0,0x07,0x80,0x0F,0x00,0x1E,0x00,0x3C,0x00,0xF8,0x01,0xB0,0x07,0x60,0x3C,0xFF,0xF1,0xFF,0x00, // 'D'
	0xFF,0xFF,0xFF,0x00,0x60,0x0C,0x01,0x80,0x30,0x06,0x00,0xFF,0xDF,0xFB,0x00,0x60,0x0C,0x01,0x80,0x30,0x06,0x00,0xFF,0xFF,0xFC, // 'E'
	0xFF,0xFF,0xFC,0x03,0x00,0xC0,0x30,0x0C,0x03,0x00,0xFF,0xBF,0xEC,0x03,0x00,0xC0,0x30,0x0C,0x03,0x00,0xC0,0x30,0x00, // 'F'
	0x07,0xE0,0x3F,0xF0,0xE0,0x73,0x80,0x26,0x00,0x1C,0x00,0x30,0x00,0x60,0x00,0xC0,0x7F,0x80,0xFF,0x00,0x1E,0x00,0x3E,0x00,0x6C,0x00,0xDC,0x01,0x9E,0x07,0x1F,0xFC,0x0F,0xE0, // 'G'
	0xC0,0x1E,0x00,0xF0,0x07,0x80,0x3C,0x01,0xE0,0x0F,0x00,0x78,0x03,0xFF,0xFF,0xFF,0xF0,0x07,0x80,0x3C,0x01,0xE0,0x0F,0x00,0x78,0x03,0xC0,0x1E,0x00,0xC0, // 'H'
	0xFF,0xFF,0xFF,0xFF,0xF0, // 'I'
	0x0C,0x30,0xC3,0x0C,0x30,0xC3,0x0C,0x30,0xC3,0x0C,0x30,0xC3,0x0C,0x30,0xC3,0x1B,0xEF,0x00, // 'J'
	0xC0,0x73,0x03,0x8C,0x1C,0x30,0xE0,0xC7,0x03,0x38,0x0D,0xC0,0x3E,0x00,0xF0,0x03,0xF0,0x0C,0xE0,0x31,0xC0,0xC3,0x83,0x07,0x0C,0x0E,0x30,0x1C,0xC0,0x3B,0x00,0x70, // 'K'
	0xC0,0x18,0x03,0x00,0x60,0x0C,0x01,0x80,0x30,0x06,0x00,0xC0,0x18,0x03,0x00,0x60,0x0C,0x01,0x80,0x30,0x06,0x00,0xFF,0xFF,0xFC, // 'L'
	0xE0,0x07,0xF0,0x0F,0xF0,0x0F,0xF8,0x1F,0xD8,0x1B,0xD8,0x1B,0xCC,0x33,0xCC,0x33,0xCC,0x33,0xC6,0x63,0xC6,0x63,0xC7,0xE3,0xC3,0xC3,0xC3,0xC3,0xC1,0x83,0xC0,0x03,0xC0,0x03,0xC0,0x03, // 'M'
	0xE0,0x1F,0x80,0xFC,0x07,0xF0,0x3D,0x81,0xE6,0x0F,0x30,0x78,0xC3,0xC6,0x1E,0x18,0xF0,0xC7,0x83,0x3C,0x19,0xE0,0x6F,0x03,0x78,0x0F,0xC0,0x7E,0x01,0xC0, // 'N'
	0x07,0xE0,0x1F,0xF8,0x3C,0x1C,0x70,0x0E,0x60,0x06,0xE0,0x07,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xE0,0x07,0x60,0x06,0x70,0x0E,0x38,0x1C,0x1F,0xF8,0x07,0xE0, // 'O'
	0xFF,0x1F,0xFB,0x03,0x60,0x3C,0x07,0x80,0xF0,0x1E,0x06,0xFF,0xDF,0xE3,0x00,0x60,0x0C,0x01,0x80,0x30,0x06,0x00,0xC0,0x18,0x00, // 'P'
	0x07,0xE0,0x1F,0xF8,0x3C,0x1C,0x70,0x0E,0x60,0x06,0xE0,0x07,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xE0,0x07,0x60,0x06,0x70,0x0E,0x38,0x1C,0x1F,0xF8,0x07,0xF0,0x00,0x38,0x00,0x18,0x00,0x0C, // 'Q'
	0xFF,0x07,0xFE,0x30,0x39,0x80,0xCC,0x06,0x60,0x33,0x01,0x98,0x18,0xFF,0xC7,0xFC,0x30,0x71,0x81,0x8C,0x06,0x60,0x33,0x01,0xD8,0x06,0xC0,0x36,0x00,0xC0, // 'R'
	0x1F,0xC7,0xFE,0x70,0x6C,0x00,0xC0,0x0C,0x00,0xC0,0x07,0x00,0x7F,0x01,0xFC,0x01,0xE0,0x07,0x00,0x30,0x03,0x00,0x3C,0x0E,0xFF,0xE3,0xF8, // 'S'
	0xFF,0xFF,0xFF,0xF0,0x30,0x00,0xC0,0x03,0x00,0x0C,0x00,0x30,0x00,0xC0,0x03,0x00,0x0C,0x00,0x30,0x00,0xC0,0x03,0x00,0x0C,0x00,0x30,0x00,0xC0,0x03,0x00,0x0C,0x00, // 'T'
	0xC0,0x1E,0x00,0xF0,0x07,0x80,0x3C,0x01,0xE0,0x0F,0x00,0x78,0x03,0xC0,0x1E,0x00,0xF0,0x07,0x80,0x3C,0x01,0xE0,0x0D,0x80,0xCE,0x0E,0x3F,0xE0,0xFE,0x00, // 'U'
	0xC0,0x03,0x60,0x06,0x60,0x06,0x60,0x06,0x30,0x0C,0x30,0x0C,0x38,0x1C,0x18,0x18,0x18,0x18,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x06,0x60,0x06,0x60,0x07,0xE0,0x03,0xC0,0x03,0xC0,0x03,0xC0, // 'V'
	0xC0,0x78,0x0F,0x01,0xE0,0x36,0x07,0x81,0x98,0x1E,0x06,0x60,0xEC,0x19,0x83,0x30,0x63,0x0C,0xC3,0x0C,0x33,0x0C,0x31,0xCE,0x30,0xC6,0x18,0xC1,0x98,0x66,0x06,0x61,0x98,0x19,0x86,0x60,0x6C,0x0D,0x80,0xF0,0x3C,0x03,0xC0,0xF0,0x0F,0x03,0xC0,0x38,0x07,0x00, // 'W'
	0x70,0x0E,0x60,0x18,0x60,0x60,0xE1,0xC0,0xC7,0x00,0xCC,0x01,0xF0,0x01,0xE0,0x03,0x80,0x07,0x80,0x1F,0x00,0x37,0x00,0xC6,0x03,0x86,0x0E,0x0E,0x18,0x0C,0x60,0x0D,0xC0,0x1C, // 'X'
	0xE0,0x1D,0x80,0x63,0x03,0x0E,0x1C,0x18,0x60,0x73,0x80,0xFC,0x01,0xE0,0x07,0x80,0x0C,0x00,0x30,0x00,0xC0,0x03,0x00,0x0C,0x00,0x30,0x00,0xC0,0x03,0x00,0x0C,0x00, // 'Y'
	0xFF,0xFF,0xFF,0xF0,0x01,0x80,0x0E,0x00,0x70,0x01,0x80,0x0C,0x00,0x60,0x03,0x80,0x1C,0x00,0x60,0x03,0x00,0x18,0x00,0xE0,0x07,0x00,0x18,0x00,0xFF,0xFF,0xFF,0xF0, // 'Z'
	0xFF,0xF1,0x8C,0x63,0x18,0xC6,0x31,0x8C,0x63,0x18,0xC6,0x31,0xFF,0x80, // '['
	0xC0,0xE0,0x60,0x60,0x60,0x30,0x30,0x30,0x18,0x18,0x18,0x18,0x0C,0x0C,0x0C,0x06,0x06,0x06,0x07,0x03, // '\'
	0xFF,0xC6,0x31,0x8C,0x63,0x18,0xC6,0x31,0x8C,0x63,0x18,0xC7,0xFF,0x80, // ']'
	0x03,0x80,0x0F,0x80,0x3B,0x80,0xE3,0x83,0x83,0x8E,0x03,0xB8,0x03,0x80, // '^'
	0xFF,0xFF,0xFF, // '_'
	0xE0,0xC1,0x83, // '`'
	0x3F,0x0F,0xF9,0x03,0x00,0x30,0x06,0x3F,0xDF,0xFF,0x03,0xC0,0x78,0x1F,0x87,0xBF,0xF3,0xE6, // 'a'
	0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0xF8,0xFF,0xCF,0x0E,0xE0,0x6C,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xE0,0x6F,0x0E,0xFF,0xCC,0xF8, // 'b'
	0x0F,0x8F,0xF7,0x05,0x80,0xC0,0x30,0x0C,0x03,0x00,0xC0,0x18,0x07,0x04,0xFF,0x1F,0x80, // 'c'
	0x00,0x30,0x03,0x00,0x30,0x03,0x00,0x31,0xF3,0x3F,0xF7,0x0F,0x60,0x7C,0x03,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0x60,0x77,0x0F,0x3F,0xF1,0xF3, // 'd'
	0x0F,0x83,0xFC,0x70,0xE6,0x03,0xC0,0x3F,0xFF,0xFF,0xFC,0x00,0xC0,0x06,0x00,0x70,0x23,0xFE,0x0F,0xC0, // 'e'
	0x0F,0x1F,0x30,0x30,0x30,0xFF,0xFF,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30, // 'f'
	0x1F,0x33,0xFF,0x70,0xFE,0x07,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x3E,0x07,0x70,0xF3,0xFF,0x1F,0x30,0x03,0x00,0x72,0x0E,0x3F,0xC1,0xF8, // 'g'
	0xC0,0x18,0x03,0x00,0x60,0x0C,0x01,0x9F,0x3F,0xF7,0x87,0xE0,0x78,0x0F,0x01,0xE0,0x3C,0x07,0x80,0xF0,0x1E,0x03,0xC0,0x78,0x0C, // 'h'
	0xFC,0x3F,0xFF,0xFF,0xF0, // 'i'
	0x18,0xC6,0x00,0x0C,0x63,0x18,0xC6,0x31,0x8C,0x63,0x18,0xC6,0x31,0xFB,0x80, // 'j'
	0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x1C,0xC3,0x8C,0x70,0xCE,0x0D,0xC0,0xF8,0x0F,0x80,0xDC,0x0C,0xE0,0xC7,0x0C,0x38,0xC1,0xCC,0x0E, // 'k'
	0xFF,0xFF,0xFF,0xFF,0xF0, // 'l'
	0xCF,0x87,0xCF,0xFD,0xFE,0xF0,0xF8,0x7E,0x07,0x03,0xC0,0x60,0x3C,0x06,0x03,0xC0,0x60,0x3C,0x06,0x03,0xC0,0x60,0x3C,0x06,0x03,0xC0,0x60,0x3C,0x06,0x03,0xC0,0x60,0x30, // 'm'
	0xCF,0x9F,0xFB,0xC3,0xF0,0x3C,0x07,0x80,0xF0,0x1E,0x03,0xC0,0x78,0x0F,0x01,0xE0,0x3C,0x06, // 'n'
	0x1F,0x83,0xFC,0x70,0xEE,0x06,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x3E,0x06,0x70,0xE3,0xFC,0x1F,0x80, // 'o'
	0xCF,0x8F,0xFC,0xF0,0xEE,0x06,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x3E,0x06,0xF0,0xEF,0xFC,0xCF,0x8C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00, // 'p'
	0x1F,0x33,0xFF,0x70,0xF6,0x07,0xC0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x36,0x07,0x70,0xF3,0xFF,0x1F,0x30,0x03,0x00,0x30,0x03,0x00,0x30,0x03, // 'q'
	0xCF,0xFF,0xF0,0xE0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0, // 'r'
	0x3F,0x1F,0xEE,0x0B,0x00,0xC0,0x3F,0x03,0xF8,0x1F,0x00,0xC0,0x38,0x1F,0xFE,0x7F,0x00, // 's'
	0x30,0x30,0x30,0x30,0xFF,0xFF,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x3F,0x1F, // 't'
	0xC0,0x78,0x0F,0x01,0xE0,0x3C,0x07,0x80,0xF0,0x1E,0x03,0xC0,0x78,0x1F,0x87,0xBF,0xF3,0xE6, // 'u'
	0xC0,0x1B,0x01,0x98,0x0C,0xC0,0xE3,0x06,0x18,0x30,0x63,0x83,0x18,0x18,0xC0,0x6C,0x03,0x60,0x1F,0x00,0x70,0x00, // 'v'
	0xC1,0xE0,0xF0,0x78,0x36,0x1E,0x19,0x87,0x86,0x63,0x31,0x9C,0xCC,0xE3,0x33,0x30,0xCC,0xCC,0x36,0x1B,0x07,0x87,0x81,0xE1,0xE0,0x78,0x78,0x1C,0x0E,0x00, // 'w'
	0xE0,0x3B,0x83,0x8E,0x38,0x31,0x80,0xD8,0x07,0xC0,0x1C,0x01,0xF0,0x1D,0xC0,0xC6,0x0C,0x18,0xE0,0xEE,0x03,0x80, // 'x'
	0xC0,0x1B,0x01,0x98,0x0C,0xE0,0xE3,0x06,0x18,0x70,0x63,0x03,0x18,0x0D,0x80,0x6C,0x03,0xE0,0x0E,0x00,0x70,0x03,0x00,0x18,0x01,0x80,0x7C,0x03,0xC0,0x00, // 'y'
	0xFF,0xFF,0xFC,0x03,0x00,0xE0,0x38,0x0E,0x03,0x80,0xE0,0x38,0x0E,0x01,0x80,0x7F,0xFF,0xFE, // 'z'
	0x07,0x87,0xC3,0x01,0x80,0xC0,0x60,0x30,0x18,0x0C,0x0E,0x3E,0x1F,0x01,0xC0,0x60,0x30,0x18,0x0C,0x06,0x03,0x01,0x80,0xF8,0x3C, // '{'
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // '|'
	0xF0,0x7C,0x06,0x03,0x01,0x80,0xC0,0x60,0x30,0x18,0x0E,0x03,0xE1,0xF1,0xC0,0xC0,0x60,0x30,0x18,0x0C,0x06,0x03,0x0F,0x87,0x80, // '}'
    0x69,0x96, // degree
};
const GFXglyph Dialog_plain_24Glyphs[] = {
// bitmapOffset, width, height, xAdvance, xOffset, yOffset
	  {     0,   1,   1,   9,    0,   -1 }, // ' '
	  {     1,   2,  18,  11,    4,  -18 }, // '!'
	  {     6,   6,   7,  12,    2,  -18 }, // '"'
	  {    12,  16,  18,  21,    2,  -18 }, // '#'
	  {    48,  11,  22,  16,    2,  -18 }, // '$'
	  {    79,  20,  18,  24,    1,  -18 }, // '%'
	  {   124,  16,  18,  20,    1,  -18 }, // '&'
	  {   160,   2,   7,   8,    2,  -18 }, // '''
	  {   162,   5,  21,  10,    2,  -18 }, // '('
	  {   176,   5,  21,  10,    2,  -18 }, // ')'
	  {   190,  11,  10,  13,    0,  -18 }, // '*'
	  {   204,  16,  16,  21,    3,  -16 }, // '+'
	  {   236,   3,   6,   9,    2,   -3 }, // ','
	  {   239,   6,   2,  10,    1,   -8 }, // '-'
	  {   241,   2,   3,   9,    3,   -3 }, // '.'
	  {   242,   8,  20,   9,    0,  -18 }, // '/'
	  {   262,  12,  18,  16,    2,  -18 }, // '0'
	  {   289,  10,  18,  16,    3,  -18 }, // '1'
	  {   312,  11,  18,  16,    2,  -18 }, // '2'
	  {   337,  12,  18,  16,    2,  -18 }, // '3'
	  {   364,  13,  18,  16,    1,  -18 }, // '4'
	  {   394,  11,  18,  16,    2,  -18 }, // '5'
	  {   419,  12,  18,  16,    2,  -18 }, // '6'
	  {   446,  11,  18,  16,    2,  -18 }, // '7'
	  {   471,  12,  18,  16,    2,  -18 }, // '8'
	  {   498,  12,  18,  16,    2,  -18 }, // '9'
	  {   525,   2,  12,   9,    3,  -12 }, // ':'
	  {   528,   3,  15,   9,    2,  -12 }, // ';'
	  {   534,  15,  13,  21,    3,  -14 }, // '<'
	  {   559,  15,   7,  21,    3,  -11 }, // '='
	  {   573,  15,  13,  21,    3,  -14 }, // '>'
	  {   598,   9,  18,  14,    2,  -18 }, // '?'
	  {   619,  21,  21,  25,    2,  -17 }, // '@'
	  {   675,  16,  18,  17,    0,  -18 }, // 'A'
	  {   711,  12,  18,  17,    2,  -18 }, // 'B'
	  {   738,  14,  18,  18,    1,  -18 }, // 'C'
	  {   770,  15,  18,  19,    2,  -18 }, // 'D'
	  {   804,  11,  18,  16,    2,  -18 }, // 'E'
	  {   829,  10,  18,  15,    2,  -18 }, // 'F'
	  {   852,  15,  18,  20,    1,  -18 }, // 'G'
	  {   886,  13,  18,  19,    2,  -18 }, // 'H'
	  {   916,   2,  18,   8,    2,  -18 }, // 'I'
	  {   921,   6,  23,   8,   -2,  -18 }, // 'J'
	  {   939,  14,  18,  17,    2,  -18 }, // 'K'
	  {   971,  11,  18,  14,    2,  -18 }, // 'L'
	  {   996,  16,  18,  22,    2,  -18 }, // 'M'
	  {  1032,  13,  18,  19,    2,  -18 }, // 'N'
	  {  1062,  16,  18,  20,    1,  -18 }, // 'O'
	  {  1098,  11,  18,  15,    2,  -18 }, // 'P'
	  {  1123,  16,  21,  20,    1,  -18 }, // 'Q'
	  {  1165,  13,  18,  18,    2,  -18 }, // 'R'
	  {  1195,  12,  18,  16,    2,  -18 }, // 'S'
	  {  1222,  14,  18,  16,    0,  -18 }, // 'T'
	  {  1254,  13,  18,  19,    2,  -18 }, // 'U'
	  {  1284,  16,  18,  17,    0,  -18 }, // 'V'
	  {  1320,  22,  18,  25,    1,  -18 }, // 'W'
	  {  1370,  15,  18,  18,    1,  -18 }, // 'X'
	  {  1404,  14,  18,  16,    0,  -18 }, // 'Y'
	  {  1436,  14,  18,  17,    1,  -18 }, // 'Z'
	  {  1468,   5,  21,  10,    2,  -18 }, // '['
	  {  1482,   8,  20,   9,    0,  -18 }, // '\'
	  {  1502,   5,  21,  10,    2,  -18 }, // ']'
	  {  1516,  15,   7,  21,    3,  -18 }, // '^'
	  {  1530,  12,   2,  13,    0,    4 }, // '_'
	  {  1533,   6,   4,  13,    2,  -19 }, // '`'
	  {  1536,  11,  13,  15,    1,  -13 }, // 'a'
	  {  1554,  12,  18,  16,    2,  -18 }, // 'b'
	  {  1581,  10,  13,  14,    1,  -13 }, // 'c'
	  {  1598,  12,  18,  16,    1,  -18 }, // 'd'
	  {  1625,  12,  13,  15,    1,  -13 }, // 'e'
	  {  1645,   8,  18,   9,    1,  -18 }, // 'f'
	  {  1663,  12,  18,  16,    1,  -13 }, // 'g'
	  {  1690,  11,  18,  16,    2,  -18 }, // 'h'
	  {  1715,   2,  18,   8,    2,  -18 }, // 'i'
	  {  1720,   5,  23,   8,   -1,  -18 }, // 'j'
	  {  1735,  12,  18,  15,    2,  -18 }, // 'k'
	  {  1762,   2,  18,   7,    2,  -18 }, // 'l'
	  {  1767,  20,  13,  25,    2,  -13 }, // 'm'
	  {  1800,  11,  13,  16,    2,  -13 }, // 'n'
	  {  1818,  12,  13,  15,    1,  -13 }, // 'o'
	  {  1838,  12,  18,  16,    2,  -13 }, // 'p'
	  {  1865,  12,  18,  16,    1,  -13 }, // 'q'
	  {  1892,   8,  13,  11,    2,  -13 }, // 'r'
	  {  1905,  10,  13,  13,    1,  -13 }, // 's'
	  {  1922,   8,  17,  10,    0,  -17 }, // 't'
	  {  1939,  11,  13,  16,    2,  -13 }, // 'u'
	  {  1957,  13,  13,  16,    1,  -13 }, // 'v'
	  {  1979,  18,  13,  21,    1,  -13 }, // 'w'
	  {  2009,  13,  13,  16,    1,  -13 }, // 'x'
	  {  2031,  13,  18,  16,    1,  -13 }, // 'y'
	  {  2061,  11,  13,  14,    1,  -13 }, // 'z'
	  {  2079,   9,  22,  16,    3,  -18 }, // '{'
	  {  2104,   2,  24,   9,    3,  -18 }, // '|'
	  {  2110,   9,  22,  16,    3,  -18 }, // '}'
	  {     0,   0,   0,   0,    0,    0 },   // 0x7E 'non-printable'
	  {     0,   0,   0,   0,    0,    0 },   // 0x7F 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x80 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x81 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x82 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x83 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x84 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x85 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x86 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x87 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x88 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x89 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x8A 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x8B 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x8C 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x8D 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x8E 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x8F 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x90 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x91 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x92 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x93 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x94 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x95 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x96 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x97 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x98 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x99 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x9A 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x9B 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x9C 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x9D 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x9E 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0x9F 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0xA0 ' '
  {     0,   0,   0,   0,    0,    0 },   // 0xA1 '¡'
  {     0,   0,   0,   0,    0,    0 },   // 0xA2 '¢'
  {     0,   0,   0,   0,    0,    0 },   // 0xA3 '£'
  {     0,   0,   0,   0,    0,    0 },   // 0xA4 '¤'
  {     0,   0,   0,   0,    0,    0 },   // 0xA5 '¥'
  {     0,   0,   0,   0,    0,    0 },   // 0xA6 '¦'
  {     0,   0,   0,   0,    0,    0 },   // 0xA7 '§'
  {     0,   0,   0,   0,    0,    0 },   // 0xA8 '¨'
  {     0,   0,   0,   0,    0,    0 },   // 0xA9 '©'
  {     0,   0,   0,   0,    0,    0 },   // 0xAA 'ª'
  {     0,   0,   0,   0,    0,    0 },   // 0xAB '«'
  {     0,   0,   0,   0,    0,    0 },   // 0xAC '¬'
  {     0,   0,   0,   0,    0,    0 },   // 0xAD 'non-printable'
  {     0,   0,   0,   0,    0,    0 },   // 0xAE '®'
  {     0,   0,   0,   0,    0,    0 },   // 0xAF '¯'
  {  2135,   4,   4,   4,    0,  -18 }    // 0xB0 '°'
};
const GFXfont Dialog_plain_24 = {
(uint8_t  *)Dialog_plain_24Bitmaps,(GFXglyph *)Dialog_plain_24Glyphs,0x20, 0xB1, 29};