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
struct sys
{
    uint16_t opcode;
    uint8_t memory[4096];
    uint8_t V[16];
    uint16_t indx;
    uint8_t pc;
    uint8_t screen[64 * 32];
    uint8_t delay_timer;
    uint8_t sound_timer;
    uint16_t stack[16];
    uint16_t sp;
    uint8_t kb[16];
}
