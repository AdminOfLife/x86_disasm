OCTOTHORPE=C:\Users\Administrator\Projects\octothorpe
OCTOTHORPE_LIB=$(OCTOTHORPE)\octothorped.lib
CL_OPTIONS=/c /D_DEBUG /Zi /I$(OCTOTHORPE)

value.obj: value.c value.h
	cl.exe value.c $(CL_OPTIONS)

X86_register.obj: X86_register.c X86_register.h
	cl.exe X86_register.c $(CL_OPTIONS)

x86_tbl.obj: x86_tbl.c
	cl.exe x86_tbl.c $(CL_OPTIONS)

x86_disas.obj: x86_disas.c x86_disas.h
	cl.exe x86_disas.c $(CL_OPTIONS)

x86_disasm_tests.obj: x86_disasm_tests.c test32_1.h test32_2.h
	cl.exe x86_disasm_tests.c $(CL_OPTIONS)

x86_disasm_test_x64.obj: x86_disasm_test_x64.c
	cl.exe x86_disasm_test_x64.c $(CL_OPTIONS)
	
x86_disasmd.lib: value.obj X86_register.obj x86_tbl.obj x86_disas.obj
	lib.exe value.obj X86_register.obj x86_tbl.obj x86_disas.obj /OUT:x86_disasmd.lib

x86_disasm_tests.exe: x86_disasm_tests.obj x86_disasm_test_x64.obj x86_disasmd.lib
	link x86_disasm_tests.obj x86_disasm_test_x64.obj $(OCTOTHORPE_LIB) x86_disasmd.lib /DEBUG /SUBSYSTEM:CONSOLE /PDB:x86_disasm_tests.pdb

all: x86_disasmd.lib x86_disasm_tests.exe

clean:
	del *.lib *.exe *.obj *.asm

