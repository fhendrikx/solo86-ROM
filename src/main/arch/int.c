#include <arch/cpu.h>
#include <arch/int.h>
#include <arch/pio.h>
#include <arch/types.h>
#include <segment.h>


/**********************************************************************
 * data
 **********************************************************************/

extern word_t _int_00;
extern word_t _int_01;
extern word_t _int_02;
extern word_t _int_03;
extern word_t _int_04;
extern word_t _int_05;
extern word_t _int_06;
extern word_t _int_07;
extern word_t _int_08;
extern word_t _int_09;
extern word_t _int_0A;
extern word_t _int_0B;
extern word_t _int_0C;
extern word_t _int_0D;
extern word_t _int_0E;
extern word_t _int_0F;

extern word_t _int_10;
extern word_t _int_11;
extern word_t _int_12;
extern word_t _int_13;
extern word_t _int_14;
extern word_t _int_15;
extern word_t _int_16;
extern word_t _int_17;
extern word_t _int_18;
extern word_t _int_19;
extern word_t _int_1A;
extern word_t _int_1B;
extern word_t _int_1C;
extern word_t _int_1D;
extern word_t _int_1E;
extern word_t _int_1F;

extern word_t _int_20;
extern word_t _int_21;
extern word_t _int_22;
extern word_t _int_23;
extern word_t _int_24;
extern word_t _int_25;
extern word_t _int_26;
extern word_t _int_27;


/**********************************************************************
 * functions
 **********************************************************************/

void int_setup()
{
    int_set(0x00, (word_t) &_int_00, main_cs);
    int_set(0x01, (word_t) &_int_01, main_cs);
    int_set(0x02, (word_t) &_int_02, main_cs);
    int_set(0x03, (word_t) &_int_03, main_cs);
    int_set(0x04, (word_t) &_int_04, main_cs);
    int_set(0x05, (word_t) &_int_05, main_cs);
    int_set(0x06, (word_t) &_int_06, main_cs);
    int_set(0x07, (word_t) &_int_07, main_cs);
    int_set(0x08, (word_t) &_int_08, main_cs);
    int_set(0x09, (word_t) &_int_09, main_cs);
    int_set(0x0A, (word_t) &_int_0A, main_cs);
    int_set(0x0B, (word_t) &_int_0B, main_cs);
    int_set(0x0C, (word_t) &_int_0C, main_cs);
    int_set(0x0D, (word_t) &_int_0D, main_cs);
    int_set(0x0E, (word_t) &_int_0E, main_cs);
    int_set(0x0F, (word_t) &_int_0F, main_cs);

    int_set(0x10, (word_t) &_int_10, main_cs);
    int_set(0x11, (word_t) &_int_11, main_cs);
    int_set(0x12, (word_t) &_int_12, main_cs);
    int_set(0x13, (word_t) &_int_13, main_cs);
    int_set(0x14, (word_t) &_int_14, main_cs);
    int_set(0x15, (word_t) &_int_15, main_cs);
    int_set(0x16, (word_t) &_int_16, main_cs);
    int_set(0x17, (word_t) &_int_17, main_cs);
    int_set(0x18, (word_t) &_int_18, main_cs);
    int_set(0x19, (word_t) &_int_19, main_cs);
    int_set(0x1A, (word_t) &_int_1A, main_cs);
    int_set(0x1B, (word_t) &_int_1B, main_cs);
    int_set(0x1C, (word_t) &_int_1C, main_cs);
    int_set(0x1D, (word_t) &_int_1D, main_cs);
    int_set(0x1E, (word_t) &_int_1E, main_cs);
    int_set(0x1F, (word_t) &_int_1F, main_cs);

    int_set(0x20, (word_t) &_int_20, main_cs);
    int_set(0x21, (word_t) &_int_21, main_cs);
    int_set(0x22, (word_t) &_int_22, main_cs);
    int_set(0x23, (word_t) &_int_23, main_cs);
    int_set(0x24, (word_t) &_int_24, main_cs);
    int_set(0x25, (word_t) &_int_25, main_cs);
    int_set(0x26, (word_t) &_int_26, main_cs);
    int_set(0x27, (word_t) &_int_27, main_cs);
}

