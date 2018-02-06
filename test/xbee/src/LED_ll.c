//#include <avr/io.h>
//#include <util/delay.h>

#include "LED_ll.h"

#define SER_low()  palClearPad(SER_PORT, SER_PIN)
#define SER_high() palSetPad(SER_PORT, SER_PIN)
#define RCLK_low()   palClearPad(RCLK_PORT, RCLK_PIN)
#define RCLK_high() palSetPad(RCLK_PORT, RCLK_PIN)
#define SRCLK_low()  palClearPad(SRCLK_PORT, SRCLK_PIN)
#define SRCLK_high() palSetPad(SRCLK_PORT, SRCLK_PIN)

void LEDinit (void) {
    //DDRD  |= 0b01110000; //1 = output, 0 = input
    palWriteGroup(IOPORT4, 0b01110000, 0, 0b10001111);
    palSetGroupMode(IOPORT4, 0b01110000, 0, PAL_MODE_OUTPUT_PUSHPULL);
    //PORTD &= 0b10001111;
}

void output_led_state(unsigned int __led_state) {
   SRCLK_low();
   RCLK_low();
   int i;
   for (i=0;i<8;i++)
   {
      if (bit_is_set(__led_state, i))
         SER_high();
      else   
         SER_low();
 
 
      SRCLK_high();
      SRCLK_low();
   }
   RCLK_high();
}

void LEDall(void) {
	output_led_state(0b11111111);
}

void LEDclear(void) {
	output_led_state(0b00000000);
}

void LEDnorth(void) {
	output_led_state(0b00100000);
}

void LEDnortheast(void) {
	output_led_state(0b00010000);
}

void LEDeast(void) {
	output_led_state(0b00001000);
}

void LEDsoutheast(void) {
	output_led_state(0b00000100);
}

void LEDsouth(void) {
	output_led_state(0b00000010);
}

void LEDsouthwest(void) {
	output_led_state(0b00000001);
}

void LEDwest(void) {
	output_led_state(0b10000000);
}

void LEDnorthwest(void) {
	output_led_state(0b01000000);
}





