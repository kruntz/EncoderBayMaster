#include "mcc_generated_files/mcc.h"
#include "faders.h"

void FADERS_WriteReg(uint8_t address, uint8_t reg, uint8_t value) {
    uint8_t p_data[2];
    I2C2_MESSAGE_STATUS status;

    p_data[0] = reg;
    p_data[1] = value;
    while (I2C2_MasterQueueIsFull() == true);
    I2C2_MasterWrite(p_data, 2, address, &status);
    while (status != I2C2_MESSAGE_COMPLETE);
}

void FADERS_Initialize(void) {
    // Reset all faders
    FADERS_WriteReg(I2C_ADR_FAD_OUT, 0x90, 0x18);
    FADERS_WriteReg(I2C_ADR_FAD_OUT, 0x91, 0x18);
    FADERS_WriteReg(I2C_ADR_FAD_OUT, 0x92, 0x19);
    FADERS_WriteReg(I2C_ADR_FAD_OUT, 0x93, 0x19);
    FADERS_WriteReg(I2C_ADR_FAD_OUT, 0x94, 0x19);
    FADERS_WriteReg(I2C_ADR_FAD_OUT, 0x95, 0x19);
    FADERS_WriteReg(I2C_ADR_FAD_OUT, 0x96, 0x18);
    FADERS_WriteReg(I2C_ADR_FAD_OUT, 0x97, 0x18);
    FADERS_WriteReg(I2C_ADR_FAD_OUT, 0x98, 0x17);

    FADERS_WriteReg(I2C_ADR_FAD_OUT, 0x85, 0x0c);
    FADERS_WriteReg(I2C_ADR_FAD_OUT, 0x86, 0x10);
    FADERS_WriteReg(I2C_ADR_FAD_OUT, 0x87, 0x28);
    FADERS_WriteReg(I2C_ADR_FAD_OUT, 0x88, 0x19);

    __delay_ms(10);
}

void FADERS_Shutdown(void) {
}
