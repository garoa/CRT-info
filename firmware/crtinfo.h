#include <at89x51.h> // Definitions of registers, SFRs and Bits
#include "bitmapfont.h"

// ISR Prototypes ===================================================
void INT0_ISR(void)	__interrupt 0; // ISR for External __interrupt 0
void T0_ISR(void)	__interrupt 1; // ISR for Timer0/Counter0 Overflow
void INT1_ISR(void)	__interrupt 2; // ISR for External __interrupt 1
void T1_ISR(void)	__interrupt 3; // ISR for Timer1/Counter1 Overflow
void UART_ISR(void)	__interrupt 4; // ISR for UART __interrupt

#define VDP_DATA 0xff0e
#define VDP_COMMAND 0xff0f
#define TILE_WIDTH 40
#define TILE_HEIGHT 24

#define NAME_TABLE_BASE_ADDR             0x0000
#define COLOR_TABLE_BASE_ADDR            0x0400
#define PATTERN_TABLE_BASE_ADDR          0x0800
#define SPRITE_PATTERN_TABLE_BASE_ADDR   0x0C00
#define SPRITE_ATTRIBUTE_TABLE_BASE_ADDR 0x1000
#define TEXT_BACKGROUND(c) (c & 0x0f)
#define TEXT_FOREGROUND(c) ((c & 0x0f) << 4)

//Video modes:
#define VDP_GRAPHICS_1_MODE 0b000
#define VDP_GRAPHICS_2_MODE 0b001
#define VDP_MULTICOLOR_MODE 0b010
#define VDP_TEXT_MODE       0b100

//Register #0 bits:
#define M3(_mode) ((_mode & 0x01) << 1)

//Register #1 bits:
#define RAM_16K (1 << 7)
#define ENABLE_ACTIVE_DISPLAY (1 << 6)
#define INTERRUPT_ENABLE (1 << 5)
#define M1_M2(_mode) (((_mode >> 1) & 0x03) << 3)

#define BLACK 0
#define TRANSPARENT 1
#define MEDIUM_GREEN 2
#define LIGHT_GREEN 3
#define DARK_BLUE 4
#define LIGHT_BLUE 5
#define DARK_RED 6
#define CYAN 7
#define MEDIUM_RED 8
#define LIGHT_RED 9
#define DARK_YELLOW 10
#define LIGHT_YELLOW 11
#define DARK_GREEN 12
#define MAGENTA 13
#define GRAY 14 
#define WHITE 15

void write_register(unsigned char reg, unsigned char value){
	*((__xdata unsigned char*) (VDP_COMMAND)) = value;
	*((__xdata unsigned char*) VDP_COMMAND) = 0x80 | (reg & 0x7);
}

void vdp_set_vram_addr(unsigned int address){
	*((__xdata unsigned char*) VDP_COMMAND) = (address & 0xff);
	*((__xdata unsigned char*) VDP_COMMAND) = ((address >> 8) & 0x3f);
}

void print(int x, int y, const char* str){
	char tile_id;
	vdp_set_vram_addr(NAME_TABLE_BASE_ADDR + x + y * TILE_WIDTH);

	for (; *str != 0; str++){
		if (*str < 'A' || *str > 'Z'){
			tile_id = 0; // missing glyph
		} else if (*str == ' ') {
			tile_id = 0; // space
		} else {
			tile_id = (*str - 'A' + 1);
		}

		*((__xdata char*) VDP_DATA) = tile_id;
	}
}

void delay(){
	unsigned int t = 0;
	while (t<65534){
		t++;
	}
}

void INT0_ISR(void)	__interrupt 0
{}
void T0_ISR(void)	__interrupt 1
{}
void INT1_ISR(void)	__interrupt 2
{}
void T1_ISR(void)	__interrupt 3
{}
void UART_ISR(void)	__interrupt 4
{}
