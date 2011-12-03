This example code was modified to work on Eridani an LM3S3651 based board
The author imposes no change in the licence from TI below
The software remains AS IS with no Warranty


USB HID Mouse Device

This example application turns the evaluation board into a USB mouse
supporting the Human Interface Device class.  The mouse pointer will move
in a square pattern for the duration of the time it is plugged in.

UART0, connected to the FTDI virtual COM port and running at 115,200,
8-N-1, is used to display messages from this application.

-------------------------------------------------------------------------------

Copyright (c) 2009-2010 Texas Instruments Incorporated.  All rights reserved.
Software License Agreement

Texas Instruments (TI) is supplying this software for use solely and
exclusively on TI's microcontroller products. The software is owned by
TI and/or its suppliers, and is protected under applicable copyright
laws. You may not combine this software with "viral" open-source
software in order to form a larger program.

THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
DAMAGES, FOR ANY REASON WHATSOEVER.

This is part of revision 6594 of the EK-LM3S9B92 Firmware Package.
