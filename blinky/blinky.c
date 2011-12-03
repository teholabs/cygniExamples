/*
Blinky turns PB0 on and off
For Cygni/LM3S3N26
B. A. Bryce/teho Labs 2011
*/

#include "inc/lm3s3n26.h"

#define blinkTime 200000

// Function prototypes
void myDelay(unsigned long delay);

int main(void)
{

    // Enable GIPO Port B
    SYSCTL_RCGC2_R = SYSCTL_RCGC2_GPIOB;
	
    myDelay(1);

    // Enable the GPIO pin for the LED (PB0).  Set the direction as output, and
    // enable the GPIO pin for digital function.

    GPIO_PORTB_DIR_R |= 0x01;
    GPIO_PORTB_DEN_R |= 0x01;


    while(1)
    {
	myDelay(blinkTime); //Wait ~ blinkTime cycles
		
        GPIO_PORTB_DATA_R |= 0x01;// PD0 on
		
	myDelay(blinkTime);//Wait ~ blinkTime cycles
		
        GPIO_PORTB_DATA_R &= ~(0x01);// PD0 off

    }
}

//Waste cycle delay function
void myDelay(unsigned long delay)
{ 
	while(delay)
	{ 
		delay--;
		__asm__ __volatile__("mov r0,r0");
	}
}
