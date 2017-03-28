/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.15
        Device            :  PIC18F46K40
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RB0 procedures
#define RB0_SetHigh()    do { LATBbits.LATB0 = 1; } while(0)
#define RB0_SetLow()   do { LATBbits.LATB0 = 0; } while(0)
#define RB0_Toggle()   do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define RB0_GetValue()         PORTBbits.RB0
#define RB0_SetDigitalInput()   do { TRISBbits.TRISB0 = 1; } while(0)
#define RB0_SetDigitalOutput()  do { TRISBbits.TRISB0 = 0; } while(0)
#define RB0_SetPullup()     do { WPUBbits.WPUB0 = 1; } while(0)
#define RB0_ResetPullup()   do { WPUBbits.WPUB0 = 0; } while(0)
#define RB0_SetAnalogMode() do { ANSELBbits.ANSELB0 = 1; } while(0)
#define RB0_SetDigitalMode()do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set RB1 procedures
#define RB1_SetHigh()    do { LATBbits.LATB1 = 1; } while(0)
#define RB1_SetLow()   do { LATBbits.LATB1 = 0; } while(0)
#define RB1_Toggle()   do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define RB1_GetValue()         PORTBbits.RB1
#define RB1_SetDigitalInput()   do { TRISBbits.TRISB1 = 1; } while(0)
#define RB1_SetDigitalOutput()  do { TRISBbits.TRISB1 = 0; } while(0)
#define RB1_SetPullup()     do { WPUBbits.WPUB1 = 1; } while(0)
#define RB1_ResetPullup()   do { WPUBbits.WPUB1 = 0; } while(0)
#define RB1_SetAnalogMode() do { ANSELBbits.ANSELB1 = 1; } while(0)
#define RB1_SetDigitalMode()do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set RB2 procedures
#define RB2_SetHigh()    do { LATBbits.LATB2 = 1; } while(0)
#define RB2_SetLow()   do { LATBbits.LATB2 = 0; } while(0)
#define RB2_Toggle()   do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define RB2_GetValue()         PORTBbits.RB2
#define RB2_SetDigitalInput()   do { TRISBbits.TRISB2 = 1; } while(0)
#define RB2_SetDigitalOutput()  do { TRISBbits.TRISB2 = 0; } while(0)
#define RB2_SetPullup()     do { WPUBbits.WPUB2 = 1; } while(0)
#define RB2_ResetPullup()   do { WPUBbits.WPUB2 = 0; } while(0)
#define RB2_SetAnalogMode() do { ANSELBbits.ANSELB2 = 1; } while(0)
#define RB2_SetDigitalMode()do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set RB3 procedures
#define RB3_SetHigh()    do { LATBbits.LATB3 = 1; } while(0)
#define RB3_SetLow()   do { LATBbits.LATB3 = 0; } while(0)
#define RB3_Toggle()   do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define RB3_GetValue()         PORTBbits.RB3
#define RB3_SetDigitalInput()   do { TRISBbits.TRISB3 = 1; } while(0)
#define RB3_SetDigitalOutput()  do { TRISBbits.TRISB3 = 0; } while(0)
#define RB3_SetPullup()     do { WPUBbits.WPUB3 = 1; } while(0)
#define RB3_ResetPullup()   do { WPUBbits.WPUB3 = 0; } while(0)
#define RB3_SetAnalogMode() do { ANSELBbits.ANSELB3 = 1; } while(0)
#define RB3_SetDigitalMode()do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set IO_RB4 aliases
#define IO_RB4_TRIS               TRISBbits.TRISB4
#define IO_RB4_LAT                LATBbits.LATB4
#define IO_RB4_PORT               PORTBbits.RB4
#define IO_RB4_WPU                WPUBbits.WPUB4
#define IO_RB4_OD                ODCONBbits.ODCB4
#define IO_RB4_ANS                ANSELBbits.ANSELB4
#define IO_RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define IO_RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define IO_RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define IO_RB4_GetValue()           PORTBbits.RB4
#define IO_RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define IO_RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define IO_RB4_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define IO_RB4_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define IO_RB4_SetPushPull()    do { ODCONBbits.ODCB4 = 1; } while(0)
#define IO_RB4_SetOpenDrain()   do { ODCONBbits.ODCB4 = 0; } while(0)
#define IO_RB4_SetAnalogMode()  do { ANSELBbits.ANSELB4 = 1; } while(0)
#define IO_RB4_SetDigitalMode() do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set IO_RB5 aliases
#define IO_RB5_TRIS               TRISBbits.TRISB5
#define IO_RB5_LAT                LATBbits.LATB5
#define IO_RB5_PORT               PORTBbits.RB5
#define IO_RB5_WPU                WPUBbits.WPUB5
#define IO_RB5_OD                ODCONBbits.ODCB5
#define IO_RB5_ANS                ANSELBbits.ANSELB5
#define IO_RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define IO_RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define IO_RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define IO_RB5_GetValue()           PORTBbits.RB5
#define IO_RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define IO_RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define IO_RB5_SetPullup()      do { WPUBbits.WPUB5 = 1; } while(0)
#define IO_RB5_ResetPullup()    do { WPUBbits.WPUB5 = 0; } while(0)
#define IO_RB5_SetPushPull()    do { ODCONBbits.ODCB5 = 1; } while(0)
#define IO_RB5_SetOpenDrain()   do { ODCONBbits.ODCB5 = 0; } while(0)
#define IO_RB5_SetAnalogMode()  do { ANSELBbits.ANSELB5 = 1; } while(0)
#define IO_RB5_SetDigitalMode() do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set O_BTN_SER aliases
#define O_BTN_SER_TRIS               TRISCbits.TRISC0
#define O_BTN_SER_LAT                LATCbits.LATC0
#define O_BTN_SER_PORT               PORTCbits.RC0
#define O_BTN_SER_WPU                WPUCbits.WPUC0
#define O_BTN_SER_OD                ODCONCbits.ODCC0
#define O_BTN_SER_ANS                ANSELCbits.ANSELC0
#define O_BTN_SER_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define O_BTN_SER_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define O_BTN_SER_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define O_BTN_SER_GetValue()           PORTCbits.RC0
#define O_BTN_SER_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define O_BTN_SER_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define O_BTN_SER_SetPullup()      do { WPUCbits.WPUC0 = 1; } while(0)
#define O_BTN_SER_ResetPullup()    do { WPUCbits.WPUC0 = 0; } while(0)
#define O_BTN_SER_SetPushPull()    do { ODCONCbits.ODCC0 = 1; } while(0)
#define O_BTN_SER_SetOpenDrain()   do { ODCONCbits.ODCC0 = 0; } while(0)
#define O_BTN_SER_SetAnalogMode()  do { ANSELCbits.ANSELC0 = 1; } while(0)
#define O_BTN_SER_SetDigitalMode() do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set O_BTN_OE aliases
#define O_BTN_OE_TRIS               TRISCbits.TRISC1
#define O_BTN_OE_LAT                LATCbits.LATC1
#define O_BTN_OE_PORT               PORTCbits.RC1
#define O_BTN_OE_WPU                WPUCbits.WPUC1
#define O_BTN_OE_OD                ODCONCbits.ODCC1
#define O_BTN_OE_ANS                ANSELCbits.ANSELC1
#define O_BTN_OE_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define O_BTN_OE_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define O_BTN_OE_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define O_BTN_OE_GetValue()           PORTCbits.RC1
#define O_BTN_OE_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define O_BTN_OE_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define O_BTN_OE_SetPullup()      do { WPUCbits.WPUC1 = 1; } while(0)
#define O_BTN_OE_ResetPullup()    do { WPUCbits.WPUC1 = 0; } while(0)
#define O_BTN_OE_SetPushPull()    do { ODCONCbits.ODCC1 = 1; } while(0)
#define O_BTN_OE_SetOpenDrain()   do { ODCONCbits.ODCC1 = 0; } while(0)
#define O_BTN_OE_SetAnalogMode()  do { ANSELCbits.ANSELC1 = 1; } while(0)
#define O_BTN_OE_SetDigitalMode() do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set O_BTN_RCLK aliases
#define O_BTN_RCLK_TRIS               TRISCbits.TRISC2
#define O_BTN_RCLK_LAT                LATCbits.LATC2
#define O_BTN_RCLK_PORT               PORTCbits.RC2
#define O_BTN_RCLK_WPU                WPUCbits.WPUC2
#define O_BTN_RCLK_OD                ODCONCbits.ODCC2
#define O_BTN_RCLK_ANS                ANSELCbits.ANSELC2
#define O_BTN_RCLK_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define O_BTN_RCLK_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define O_BTN_RCLK_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define O_BTN_RCLK_GetValue()           PORTCbits.RC2
#define O_BTN_RCLK_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define O_BTN_RCLK_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define O_BTN_RCLK_SetPullup()      do { WPUCbits.WPUC2 = 1; } while(0)
#define O_BTN_RCLK_ResetPullup()    do { WPUCbits.WPUC2 = 0; } while(0)
#define O_BTN_RCLK_SetPushPull()    do { ODCONCbits.ODCC2 = 1; } while(0)
#define O_BTN_RCLK_SetOpenDrain()   do { ODCONCbits.ODCC2 = 0; } while(0)
#define O_BTN_RCLK_SetAnalogMode()  do { ANSELCbits.ANSELC2 = 1; } while(0)
#define O_BTN_RCLK_SetDigitalMode() do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set O_BTN_SRCLK aliases
#define O_BTN_SRCLK_TRIS               TRISCbits.TRISC3
#define O_BTN_SRCLK_LAT                LATCbits.LATC3
#define O_BTN_SRCLK_PORT               PORTCbits.RC3
#define O_BTN_SRCLK_WPU                WPUCbits.WPUC3
#define O_BTN_SRCLK_OD                ODCONCbits.ODCC3
#define O_BTN_SRCLK_ANS                ANSELCbits.ANSELC3
#define O_BTN_SRCLK_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define O_BTN_SRCLK_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define O_BTN_SRCLK_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define O_BTN_SRCLK_GetValue()           PORTCbits.RC3
#define O_BTN_SRCLK_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define O_BTN_SRCLK_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define O_BTN_SRCLK_SetPullup()      do { WPUCbits.WPUC3 = 1; } while(0)
#define O_BTN_SRCLK_ResetPullup()    do { WPUCbits.WPUC3 = 0; } while(0)
#define O_BTN_SRCLK_SetPushPull()    do { ODCONCbits.ODCC3 = 1; } while(0)
#define O_BTN_SRCLK_SetOpenDrain()   do { ODCONCbits.ODCC3 = 0; } while(0)
#define O_BTN_SRCLK_SetAnalogMode()  do { ANSELCbits.ANSELC3 = 1; } while(0)
#define O_BTN_SRCLK_SetDigitalMode() do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set O_VU_SER aliases
#define O_VU_SER_TRIS               TRISCbits.TRISC4
#define O_VU_SER_LAT                LATCbits.LATC4
#define O_VU_SER_PORT               PORTCbits.RC4
#define O_VU_SER_WPU                WPUCbits.WPUC4
#define O_VU_SER_OD                ODCONCbits.ODCC4
#define O_VU_SER_ANS                ANSELCbits.ANSELC4
#define O_VU_SER_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define O_VU_SER_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define O_VU_SER_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define O_VU_SER_GetValue()           PORTCbits.RC4
#define O_VU_SER_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define O_VU_SER_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define O_VU_SER_SetPullup()      do { WPUCbits.WPUC4 = 1; } while(0)
#define O_VU_SER_ResetPullup()    do { WPUCbits.WPUC4 = 0; } while(0)
#define O_VU_SER_SetPushPull()    do { ODCONCbits.ODCC4 = 1; } while(0)
#define O_VU_SER_SetOpenDrain()   do { ODCONCbits.ODCC4 = 0; } while(0)
#define O_VU_SER_SetAnalogMode()  do { ANSELCbits.ANSELC4 = 1; } while(0)
#define O_VU_SER_SetDigitalMode() do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set O_VU_OE aliases
#define O_VU_OE_TRIS               TRISCbits.TRISC5
#define O_VU_OE_LAT                LATCbits.LATC5
#define O_VU_OE_PORT               PORTCbits.RC5
#define O_VU_OE_WPU                WPUCbits.WPUC5
#define O_VU_OE_OD                ODCONCbits.ODCC5
#define O_VU_OE_ANS                ANSELCbits.ANSELC5
#define O_VU_OE_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define O_VU_OE_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define O_VU_OE_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define O_VU_OE_GetValue()           PORTCbits.RC5
#define O_VU_OE_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define O_VU_OE_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define O_VU_OE_SetPullup()      do { WPUCbits.WPUC5 = 1; } while(0)
#define O_VU_OE_ResetPullup()    do { WPUCbits.WPUC5 = 0; } while(0)
#define O_VU_OE_SetPushPull()    do { ODCONCbits.ODCC5 = 1; } while(0)
#define O_VU_OE_SetOpenDrain()   do { ODCONCbits.ODCC5 = 0; } while(0)
#define O_VU_OE_SetAnalogMode()  do { ANSELCbits.ANSELC5 = 1; } while(0)
#define O_VU_OE_SetDigitalMode() do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set O_VU_RCLK aliases
#define O_VU_RCLK_TRIS               TRISCbits.TRISC6
#define O_VU_RCLK_LAT                LATCbits.LATC6
#define O_VU_RCLK_PORT               PORTCbits.RC6
#define O_VU_RCLK_WPU                WPUCbits.WPUC6
#define O_VU_RCLK_OD                ODCONCbits.ODCC6
#define O_VU_RCLK_ANS                ANSELCbits.ANSELC6
#define O_VU_RCLK_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define O_VU_RCLK_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define O_VU_RCLK_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define O_VU_RCLK_GetValue()           PORTCbits.RC6
#define O_VU_RCLK_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define O_VU_RCLK_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define O_VU_RCLK_SetPullup()      do { WPUCbits.WPUC6 = 1; } while(0)
#define O_VU_RCLK_ResetPullup()    do { WPUCbits.WPUC6 = 0; } while(0)
#define O_VU_RCLK_SetPushPull()    do { ODCONCbits.ODCC6 = 1; } while(0)
#define O_VU_RCLK_SetOpenDrain()   do { ODCONCbits.ODCC6 = 0; } while(0)
#define O_VU_RCLK_SetAnalogMode()  do { ANSELCbits.ANSELC6 = 1; } while(0)
#define O_VU_RCLK_SetDigitalMode() do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set O_VU_SRCLK aliases
#define O_VU_SRCLK_TRIS               TRISCbits.TRISC7
#define O_VU_SRCLK_LAT                LATCbits.LATC7
#define O_VU_SRCLK_PORT               PORTCbits.RC7
#define O_VU_SRCLK_WPU                WPUCbits.WPUC7
#define O_VU_SRCLK_OD                ODCONCbits.ODCC7
#define O_VU_SRCLK_ANS                ANSELCbits.ANSELC7
#define O_VU_SRCLK_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define O_VU_SRCLK_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define O_VU_SRCLK_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define O_VU_SRCLK_GetValue()           PORTCbits.RC7
#define O_VU_SRCLK_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define O_VU_SRCLK_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define O_VU_SRCLK_SetPullup()      do { WPUCbits.WPUC7 = 1; } while(0)
#define O_VU_SRCLK_ResetPullup()    do { WPUCbits.WPUC7 = 0; } while(0)
#define O_VU_SRCLK_SetPushPull()    do { ODCONCbits.ODCC7 = 1; } while(0)
#define O_VU_SRCLK_SetOpenDrain()   do { ODCONCbits.ODCC7 = 0; } while(0)
#define O_VU_SRCLK_SetAnalogMode()  do { ANSELCbits.ANSELC7 = 1; } while(0)
#define O_VU_SRCLK_SetDigitalMode() do { ANSELCbits.ANSELC7 = 0; } while(0)

// get/set I_ENC_QH aliases
#define I_ENC_QH_TRIS               TRISDbits.TRISD0
#define I_ENC_QH_LAT                LATDbits.LATD0
#define I_ENC_QH_PORT               PORTDbits.RD0
#define I_ENC_QH_WPU                WPUDbits.WPUD0
#define I_ENC_QH_OD                ODCONDbits.ODCD0
#define I_ENC_QH_ANS                ANSELDbits.ANSELD0
#define I_ENC_QH_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define I_ENC_QH_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define I_ENC_QH_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define I_ENC_QH_GetValue()           PORTDbits.RD0
#define I_ENC_QH_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define I_ENC_QH_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define I_ENC_QH_SetPullup()      do { WPUDbits.WPUD0 = 1; } while(0)
#define I_ENC_QH_ResetPullup()    do { WPUDbits.WPUD0 = 0; } while(0)
#define I_ENC_QH_SetPushPull()    do { ODCONDbits.ODCD0 = 1; } while(0)
#define I_ENC_QH_SetOpenDrain()   do { ODCONDbits.ODCD0 = 0; } while(0)
#define I_ENC_QH_SetAnalogMode()  do { ANSELDbits.ANSELD0 = 1; } while(0)
#define I_ENC_QH_SetDigitalMode() do { ANSELDbits.ANSELD0 = 0; } while(0)

// get/set I_ENC_SCK aliases
#define I_ENC_SCK_TRIS               TRISDbits.TRISD1
#define I_ENC_SCK_LAT                LATDbits.LATD1
#define I_ENC_SCK_PORT               PORTDbits.RD1
#define I_ENC_SCK_WPU                WPUDbits.WPUD1
#define I_ENC_SCK_OD                ODCONDbits.ODCD1
#define I_ENC_SCK_ANS                ANSELDbits.ANSELD1
#define I_ENC_SCK_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define I_ENC_SCK_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define I_ENC_SCK_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define I_ENC_SCK_GetValue()           PORTDbits.RD1
#define I_ENC_SCK_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define I_ENC_SCK_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define I_ENC_SCK_SetPullup()      do { WPUDbits.WPUD1 = 1; } while(0)
#define I_ENC_SCK_ResetPullup()    do { WPUDbits.WPUD1 = 0; } while(0)
#define I_ENC_SCK_SetPushPull()    do { ODCONDbits.ODCD1 = 1; } while(0)
#define I_ENC_SCK_SetOpenDrain()   do { ODCONDbits.ODCD1 = 0; } while(0)
#define I_ENC_SCK_SetAnalogMode()  do { ANSELDbits.ANSELD1 = 1; } while(0)
#define I_ENC_SCK_SetDigitalMode() do { ANSELDbits.ANSELD1 = 0; } while(0)

// get/set I_ENC_RCK_SLOAD aliases
#define I_ENC_RCK_SLOAD_TRIS               TRISDbits.TRISD2
#define I_ENC_RCK_SLOAD_LAT                LATDbits.LATD2
#define I_ENC_RCK_SLOAD_PORT               PORTDbits.RD2
#define I_ENC_RCK_SLOAD_WPU                WPUDbits.WPUD2
#define I_ENC_RCK_SLOAD_OD                ODCONDbits.ODCD2
#define I_ENC_RCK_SLOAD_ANS                ANSELDbits.ANSELD2
#define I_ENC_RCK_SLOAD_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define I_ENC_RCK_SLOAD_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define I_ENC_RCK_SLOAD_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define I_ENC_RCK_SLOAD_GetValue()           PORTDbits.RD2
#define I_ENC_RCK_SLOAD_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define I_ENC_RCK_SLOAD_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define I_ENC_RCK_SLOAD_SetPullup()      do { WPUDbits.WPUD2 = 1; } while(0)
#define I_ENC_RCK_SLOAD_ResetPullup()    do { WPUDbits.WPUD2 = 0; } while(0)
#define I_ENC_RCK_SLOAD_SetPushPull()    do { ODCONDbits.ODCD2 = 1; } while(0)
#define I_ENC_RCK_SLOAD_SetOpenDrain()   do { ODCONDbits.ODCD2 = 0; } while(0)
#define I_ENC_RCK_SLOAD_SetAnalogMode()  do { ANSELDbits.ANSELD2 = 1; } while(0)
#define I_ENC_RCK_SLOAD_SetDigitalMode() do { ANSELDbits.ANSELD2 = 0; } while(0)

// get/set I_BTN_QH aliases
#define I_BTN_QH_TRIS               TRISDbits.TRISD3
#define I_BTN_QH_LAT                LATDbits.LATD3
#define I_BTN_QH_PORT               PORTDbits.RD3
#define I_BTN_QH_WPU                WPUDbits.WPUD3
#define I_BTN_QH_OD                ODCONDbits.ODCD3
#define I_BTN_QH_ANS                ANSELDbits.ANSELD3
#define I_BTN_QH_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define I_BTN_QH_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define I_BTN_QH_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define I_BTN_QH_GetValue()           PORTDbits.RD3
#define I_BTN_QH_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define I_BTN_QH_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define I_BTN_QH_SetPullup()      do { WPUDbits.WPUD3 = 1; } while(0)
#define I_BTN_QH_ResetPullup()    do { WPUDbits.WPUD3 = 0; } while(0)
#define I_BTN_QH_SetPushPull()    do { ODCONDbits.ODCD3 = 1; } while(0)
#define I_BTN_QH_SetOpenDrain()   do { ODCONDbits.ODCD3 = 0; } while(0)
#define I_BTN_QH_SetAnalogMode()  do { ANSELDbits.ANSELD3 = 1; } while(0)
#define I_BTN_QH_SetDigitalMode() do { ANSELDbits.ANSELD3 = 0; } while(0)

// get/set I_BTN_SCK aliases
#define I_BTN_SCK_TRIS               TRISDbits.TRISD4
#define I_BTN_SCK_LAT                LATDbits.LATD4
#define I_BTN_SCK_PORT               PORTDbits.RD4
#define I_BTN_SCK_WPU                WPUDbits.WPUD4
#define I_BTN_SCK_OD                ODCONDbits.ODCD4
#define I_BTN_SCK_ANS                ANSELDbits.ANSELD4
#define I_BTN_SCK_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define I_BTN_SCK_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define I_BTN_SCK_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define I_BTN_SCK_GetValue()           PORTDbits.RD4
#define I_BTN_SCK_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define I_BTN_SCK_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define I_BTN_SCK_SetPullup()      do { WPUDbits.WPUD4 = 1; } while(0)
#define I_BTN_SCK_ResetPullup()    do { WPUDbits.WPUD4 = 0; } while(0)
#define I_BTN_SCK_SetPushPull()    do { ODCONDbits.ODCD4 = 1; } while(0)
#define I_BTN_SCK_SetOpenDrain()   do { ODCONDbits.ODCD4 = 0; } while(0)
#define I_BTN_SCK_SetAnalogMode()  do { ANSELDbits.ANSELD4 = 1; } while(0)
#define I_BTN_SCK_SetDigitalMode() do { ANSELDbits.ANSELD4 = 0; } while(0)

// get/set I_BTN_RCK_SLOAD aliases
#define I_BTN_RCK_SLOAD_TRIS               TRISDbits.TRISD5
#define I_BTN_RCK_SLOAD_LAT                LATDbits.LATD5
#define I_BTN_RCK_SLOAD_PORT               PORTDbits.RD5
#define I_BTN_RCK_SLOAD_WPU                WPUDbits.WPUD5
#define I_BTN_RCK_SLOAD_OD                ODCONDbits.ODCD5
#define I_BTN_RCK_SLOAD_ANS                ANSELDbits.ANSELD5
#define I_BTN_RCK_SLOAD_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define I_BTN_RCK_SLOAD_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define I_BTN_RCK_SLOAD_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define I_BTN_RCK_SLOAD_GetValue()           PORTDbits.RD5
#define I_BTN_RCK_SLOAD_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define I_BTN_RCK_SLOAD_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define I_BTN_RCK_SLOAD_SetPullup()      do { WPUDbits.WPUD5 = 1; } while(0)
#define I_BTN_RCK_SLOAD_ResetPullup()    do { WPUDbits.WPUD5 = 0; } while(0)
#define I_BTN_RCK_SLOAD_SetPushPull()    do { ODCONDbits.ODCD5 = 1; } while(0)
#define I_BTN_RCK_SLOAD_SetOpenDrain()   do { ODCONDbits.ODCD5 = 0; } while(0)
#define I_BTN_RCK_SLOAD_SetAnalogMode()  do { ANSELDbits.ANSELD5 = 1; } while(0)
#define I_BTN_RCK_SLOAD_SetDigitalMode() do { ANSELDbits.ANSELD5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/