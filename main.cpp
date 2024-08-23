/*
    Title:  SKELETON CODE for LCD, 4 digit Display, and Bluefruit Uart Friend
    Author: YOUR NAME HERE, Lab Section & Student Id Number here
    Date:   Today's Date HERE
    Description:    
*/

// INCLUDE SECTION
#include "mbed.h"                           // include the mbed library
#include "Grove_LCD_RGB_Backlight.h"        // include LCD library V5.0
#include "DigitDisplay.h"                   // 4 digit display library

//  HARDWARE INTERFACE SECTION
Grove_LCD_RGB_Backlight LCD(D14, D15);      // pins for LCD connection(D14,D15) 
                                            // connect LCD to any I2C on Grove Shield
DigitDisplay segment(D2,D3);                // 4 digit display connected to D2 on Grove Shield
Serial blue(D1,D0);                         // blue is of class serial (D1,D0) 
                                            // aka  UART on Grove Shield
int main()
{
  printf("Hello World\n");
	fflush(stdout);
	return(0);
}
