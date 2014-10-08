/*
 * =====================================================================================
 *
 *       Filename:  opcode.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/10/2014 12:06:56
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhada Alex
 *
 * =====================================================================================
 */

#include "include/opcode.h"

void (*fl_op[16](s_sys *s)) =
{
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0;
}

void get_opcode(s_sys *s)
{
    uint8_t mem1 = s->memory[s->pc];
    uint8_t mem2 = s->memory[s->pc + 1];
    s->opcode = mem1 << 8 | mem2;
}

void choose_func(s_sys *s)
{
    uint8_t idop = s->opcode & 0xF000;
    if (idop <= 0xF)
        fl_op[idop](s);
    else
        op_codeerr();
}
void treat_opcode(s_sys *s)
{
    get_opcode(s);
    choose_func(s);
}
