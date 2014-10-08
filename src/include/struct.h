/*
 * =====================================================================================
 *
 *       Filename:  struct.h
 *
 *    Description:  Structure for the chip 8 system
 *
 *        Version:  1.0
 *        Created:  08/10/2014 11:38:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhada Alex
 *
 * =====================================================================================
 */

#include <stdint.h>

typedef struct sys
{
    /* Currunt opcode */
    uint16_t opcode;

    /* RAM */
    uint8_t memory[4096];

    /* Registers & Index Register*/
    uint8_t V[16];
    uint16_t indx;

    /* Program counter */
    uint8_t pc;

    /*  screen 2048 pixel */
    uint8_t screen[64 * 32];

    /* 2 Timers Registers */
    uint8_t delay_timer;
    uint8_t sound_timer;

    /* Program counter Stack & Stack Pointer */
    uint16_t stack[16];
    uint16_t sp;

    /* Keyboard 16 Keys */
    uint8_t kb[16];
}s_sys;
