
s_sys *init_struct()
{
    s_sys *sys = malloc(sizeof (s_sys));
    sys.opcode = 0;
    
    for (int i = 512; i < 4096; i++)
        sys.memory[i] = 0;

    for (int i = 0; i < 16; i++)
        sys.V[i] = 0;
    sys.indx = 0;
    sys.pc = 0;

    for (int i = 0; i < 64 * 32; i++)
        sys.screen[i] = 0;
    sys.delay_timer = 0;
    sys.sound_timer = 0;

    for (int i = 0; i < 16; i++)
        sys.stack[i] = 0;
    sys.sp = 0;
    
    for (int i = 0; i < 16; i++)
        kb[i] = 0;
}
