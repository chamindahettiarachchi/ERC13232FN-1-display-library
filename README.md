# ERC13232FN-1-display-library
ERC13232FN-1 demo code
# ST7567 LCD Driver for ATmega328P

A minimal, bare-metal ST7567A LCD driver written in C for the ATmega328P.
Uses bit-banged SPI and supports full ASCII text rendering with a 6×8 font.

## Features
- ATmega328P @ 16 MHz
- Bit-banged SPI (no hardware SPI required)
- 132×32 ST7567A LCD
- Page/column addressing
- Full ASCII (32–127) text support
- Adjustable character spacing
- Clean modular driver design

## Hardware
- MCU: ATmega328P
- LCD Controller: ST7567A
- Interface: SPI (software)

## Pin Mapping
| LCD | ATmega328P |
|----|-----------|
| RST | PB0 |
| RS  | PB1 |
| CS  | PB2 |
| SDA | PB3 |
| SCK | PB5 |

## Example
```c
lcd_clear();
lcd_string(0, 0, "HELLO WORLD");
lcd_string(0, 1, "abcXYZ123");
