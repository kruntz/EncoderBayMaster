#ifndef FADERS_H
#define	FADERS_H

#include "mcc_generated_files/mcc.h"

// I2C bus addresses
#define I2C_ADR_FAD_OUT     0x42

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Initialize Tascam fader bank
 * @Example
    FADERS_Initialize();
 */
void FADERS_Initialize(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Decommission Tascam fader bank
 * @Example
    FADERS_Shutdown();
 */
void FADERS_Shutdown(void);

/**
 * @Param
    address - I2C peripheral to be accessed
 * @Param
    reg - Register address
 * @Param
    value - Register content required
 * @Returns
    none
 * @Description
    Write a byte value into a device register
 * @Example
    FADERS_WriteReg();
 */
void FADERS_WriteReg(uint8_t address, uint8_t reg, uint8_t value);

#endif	/* FADERS_H */