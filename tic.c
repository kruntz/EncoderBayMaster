#include "mcc_generated_files/mcc.h"
#include "tic.h"
#include "faders.h"

#define DEMO_TIC 1000 // 1 sec
#define DEMO_TICTIC 8 // 4 msec

static uint16_t delay_tic = 0;
static uint8_t demo_tic = 0;
static uint8_t demo_step = 0;

static uint16_t delay_ticTic = 0;
static uint8_t demo_ticTic = 0;
static uint8_t pos_ticTic = 0;

void TIC_InterruptHandler(void) {
    IO_RB4_SetHigh();
    Nop();
    Nop();
    IO_RB4_SetLow();
    if (++delay_tic >= DEMO_TIC) {
        delay_tic = 0;
        demo_tic++;
    }
    if (++delay_ticTic >= DEMO_TICTIC) {
        delay_ticTic = 0;
        demo_ticTic++;
    }
}

void TIC_Faders_Demo(void) {
    if (demo_tic > 0) {
        demo_tic--;
        switch (demo_step) {
            case 0:
                FADERS_WriteReg(I2C_ADR_FAD_OUT, 0x01, 0x00);
                FADERS_WriteReg(I2C_ADR_FAD_OUT, 0x03, 0x00);
                demo_step = 1;
                break;
            case 1:
                FADERS_WriteReg(I2C_ADR_FAD_OUT, 0x00, 0x7f);
                FADERS_WriteReg(I2C_ADR_FAD_OUT, 0x02, 0x7f);
                demo_step = 2;
                break;
            case 2:
                FADERS_WriteReg(I2C_ADR_FAD_OUT, 0x01, 0x7f);
                FADERS_WriteReg(I2C_ADR_FAD_OUT, 0x03, 0x7f);
                demo_step = 3;
                break;
            case 3:
                FADERS_WriteReg(I2C_ADR_FAD_OUT, 0x00, 0x00);
                FADERS_WriteReg(I2C_ADR_FAD_OUT, 0x02, 0x00);
                demo_step = 0;
                break;
        }
    }
    if (demo_ticTic > 0) {
        demo_ticTic--;
        FADERS_WriteReg(I2C_ADR_FAD_OUT, 0x08, (pos_ticTic >= 0x7f) ? -pos_ticTic & 0x7f : pos_ticTic);
        pos_ticTic++;
    }
}
