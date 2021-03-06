    disas_test1(Fuzzy_False, (const unsigned char*)"\xD3\x26", 0x123456, "SHL [ESI], CL");
    disas_test1(Fuzzy_False, (const unsigned char*)"\xD9\xE0", 0x123456, "FCHS");
    disas_test1(Fuzzy_False, (const unsigned char*)"\xD9\xE1", 0x123456, "FABS");
    disas_test1(Fuzzy_False, (const unsigned char*)"\xD9\xE5", 0x123456, "FXAM");
    disas_test1(Fuzzy_False, (const unsigned char*)"\xD9\xE8", 0x123456, "FLD1");
    disas_test1(Fuzzy_False, (const unsigned char*)"\xD9\xE9", 0x123456, "FLDL2T");
    disas_test1(Fuzzy_False, (const unsigned char*)"\xD9\xEA", 0x123456, "FLDL2E");
    disas_test1(Fuzzy_False, (const unsigned char*)"\xD9\xEB", 0x123456, "FLDPI");
    disas_test1(Fuzzy_False, (const unsigned char*)"\xD9\xEC", 0x123456, "FLDLG2");
    disas_test1(Fuzzy_False, (const unsigned char*)"\xD9\xED", 0x123456, "FLDLN2");
    disas_test1(Fuzzy_False, (const unsigned char*)"\xD9\xEE", 0x123456, "FLDZ");
    disas_test1(Fuzzy_False, (const unsigned char*)"\xD9\xFF", 0x123456, "FCOS");
    disas_test1(Fuzzy_False, (const unsigned char*)"\xDF\xE0", 0x123456, "FNSTSW AX");
    disas_test1(Fuzzy_False, (const unsigned char*)"\xDB\xE2", 0x123456, "FNCLEX");
    disas_test1(Fuzzy_False, (const unsigned char*)"\xDB\xE3", 0x123456, "FNINIT");
    disas_test1(Fuzzy_False, (const unsigned char*)"\xDA\xE9", 0x123456, "FUCOMPP ST0, ST1");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x66\x01\x90\x90\x90\x90\x90", 0x123456, "ADD [EAX-6f6f6f70h], DX");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x66\x03\x90\x90\x90\x90\x90", 0x123456, "ADD DX, [EAX-6f6f6f70h]");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x66\x05\x90\x90", 0x123456, "ADD AX, 9090h");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x66\x40", 0x123456, "INC AX");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x66\x41", 0x123456, "INC CX");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x66\x42", 0x123456, "INC DX");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x66\x43", 0x123456, "INC BX");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x66\x44", 0x123456, "INC SP");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x66\x45", 0x123456, "INC BP");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x66\x46", 0x123456, "INC SI");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x66\x47", 0x123456, "INC DI");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x66\x48", 0x123456, "DEC AX");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x66\x49", 0x123456, "DEC CX");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x66\x4A", 0x123456, "DEC DX");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x66\x4B", 0x123456, "DEC BX");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x66\x4C", 0x123456, "DEC SP");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x66\x4D", 0x123456, "DEC BP");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x66\x4E", 0x123456, "DEC SI");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x66\x4F", 0x123456, "DEC DI");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x66\x50", 0x123456, "PUSH AX");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x66\x69\x90\x90\x90\x90\x90\x90\x90", 0x123456, "IMUL DX, [EAX-6f6f6f70h], 9090h");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x66\x6D", 0x123456, "INSW");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x66\x95", 0x123456, "XCHG AX, BP");
    disas_test1(Fuzzy_False, (const unsigned char*)"\xD8\xC0", 0x123456, "FADD ST0, ST0");
    disas_test1(Fuzzy_False, (const unsigned char*)"\xD8\xC6", 0x123456, "FADD ST0, ST6");
    disas_test1(Fuzzy_False, (const unsigned char*)"\xDC\xC0", 0x123456, "FADD ST0, ST0");
    disas_test1(Fuzzy_False, (const unsigned char*)"\xDC\xC6", 0x123456, "FADD ST6, ST0");
    disas_test1(Fuzzy_False, (const unsigned char*)"\xD8\xC8", 0x123456, "FMUL ST0, ST0");
    disas_test1(Fuzzy_False, (const unsigned char*)"\xD8\xCF", 0x123456, "FMUL ST0, ST7");
    disas_test1(Fuzzy_False, (const unsigned char*)"\x0F\xC9", 0x123456, "BSWAP ECX");
    
    // might be added? http://blogs.technet.com/b/mmpc/archive/2013/06/24/investigation-of-a-new-undocumented-instruction-trick.aspx?Redirected=true
    //disas_test1(Fuzzy_False, (const unsigned char*)"\xD9\xD8", 0x123456, "???");
    //disas_test1(Fuzzy_False, (const unsigned char*)"\xDF\xDF", 0x123456, "???");

/* vim: set expandtab ts=4 sw=4 : */
