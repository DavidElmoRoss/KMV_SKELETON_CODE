/*
    Title:  SKELETON CODE for LCD, 4 digit Display, and Bluefruit Uart Friend
    Author: YOUR NAME HERE
    Date:   Today's Date HERE
    Description:    
*/

// INCLUDE SECTION
#include "mbed.h"                           // include the mbed library
#include "Grove_LCD_RGB_Backlight.h"        // include LCD library
#include "DigitDisplay.h"                   // 4 digit display library

//  HARDWARE INTERFACE SECTION
Grove_LCD_RGB_Backlight LCD(D14, D15);   // pins for LCD connection(D14,D15)
DigitDisplay segment(D2,D3);                // 4 digit display connected to D16
Serial blue(D1,D0);                         // blue is of class serial (D1,D0) 
                                            // associated with UART
int main()
{
  printf("Hello World\n");
	fflush(stdout);
	return(0);
}
