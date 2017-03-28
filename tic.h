#ifndef TIC_H
#define	TIC_H

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Timer TIC interrupt handler
 * @Example
    TMR0_SetInterruptHandler(TMR0_InterruptHandler);
 */
void TIC_InterruptHandler(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    "Randomly" move Tascam faders
 * @Example
    TIC_Faders_Demo();
 */
void TIC_Faders_Demo(void);

#endif	/* TIC_H */
