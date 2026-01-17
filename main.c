#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
#include "st7567.h"
#include <string.h>
#include <stdio.h>
int temp = 17;
char str[20];
int main(void)
{
    lcd_init();
    _delay_ms(200);

   lcd_clear();
lcd_string(0, 0, "HELLO");
lcd_string(0, 1, "Chaminda");
lcd_string(0, 2, "[\\]^_`");
sprintf(str,"Temperature = %d",temp);
lcd_string(0, 3, str);

    while (1);
}




