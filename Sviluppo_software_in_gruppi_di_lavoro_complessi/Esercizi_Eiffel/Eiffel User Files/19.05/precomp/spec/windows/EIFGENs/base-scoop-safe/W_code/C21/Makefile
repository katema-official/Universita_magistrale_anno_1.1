INCLUDE_PATH = 
SHELL = /bin/sh
CC = "C:\Program Files (x86)\Eiffel Software\EiffelStudio 19.05 GPL/gcc/windows/mingw/bin/gcc"
CPP = "C:\Program Files (x86)\Eiffel Software\EiffelStudio 19.05 GPL/gcc/windows/mingw/bin/gcc"
CFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DWORKBENCH -I"C:\Program Files (x86)\Eiffel Software\EiffelStudio 19.05 GPL/studio/spec/windows/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DWORKBENCH -I"C:\Program Files (x86)\Eiffel Software\EiffelStudio 19.05 GPL/studio/spec/windows/include" -I. $(INCLUDE_PATH)
LDFLAGS = 
CCLDFLAGS =   -mwindows
LDSHAREDFLAGS =  
EIFLIB = "C:\Program Files (x86)\Eiffel Software\EiffelStudio 19.05 GPL/studio/spec/windows/lib/mingw/mtwkbench.a"
EIFTEMPLATES = C:\Program Files (x86)\Eiffel Software\EiffelStudio 19.05 GPL/studio/config/windows/templates
LIBS = 
MAKE = "C:\Program Files (x86)\Eiffel Software\EiffelStudio 19.05 GPL/gcc/windows/msys/1.0/bin/make.exe"
AR = "C:\Program Files (x86)\Eiffel Software\EiffelStudio 19.05 GPL/gcc/windows/mingw/bin/ar"
LD = "C:\Program Files (x86)\Eiffel Software\EiffelStudio 19.05 GPL/gcc/windows/mingw/bin/ld"
MKDEP =   --
MV = "C:\Program Files (x86)\Eiffel Software\EiffelStudio 19.05 GPL/gcc/windows/msys/1.0/bin/cp"
CP = "C:\Program Files (x86)\Eiffel Software\EiffelStudio 19.05 GPL/gcc/windows/msys/1.0/bin/cp"
RANLIB = "C:\Program Files (x86)\Eiffel Software\EiffelStudio 19.05 GPL/gcc/windows/mingw/bin/ranlib.exe"
RM = "C:\Program Files (x86)\Eiffel Software\EiffelStudio 19.05 GPL/gcc/windows/msys/1.0/bin/rm" -f
FILE_EXIST = 
RMDIR = "C:\Program Files (x86)\Eiffel Software\EiffelStudio 19.05 GPL/gcc/windows/msys/1.0/bin/rd"
X2C = "C:\Program Files (x86)\Eiffel Software\EiffelStudio 19.05 GPL/studio/spec/windows/bin/x2c.exe"
SHAREDLINK = "C:\Program Files (x86)\Eiffel Software\EiffelStudio 19.05 GPL/gcc/windows/mingw/bin/dllwrap"
SHAREDLIBS = -luser32 -lws2_32 -ladvapi32 -lgdi32 -lshell32 -lmsimg32 -lcomdlg32 -luuid -lole32 -loleaut32 -lcomctl32 -lmpr -lshlwapi -lwinspool -lstdc++ 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = "C:\Program Files (x86)\Eiffel Software\EiffelStudio 19.05 GPL/gcc/windows/msys/1.0/bin/touch" finished
PATH := C:\Program Files (x86)\Eiffel Software\EiffelStudio 19.05 GPL/gcc/windows/mingw/libexec/gcc/mingw32/3.4.2;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Windows\System32\OpenSSH\;C:\Program Files\Git\cmd;C:\Users\aless\AppData\Local\Microsoft\WindowsApps; 
SYSTEM_IN_DYNAMIC_LIB = mingw\driver.exe.dll 

.SUFFIXES:.cpp .o 

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C21_c.o 

OLDOBJECTS =  sp688.o sp688d.o ar663.o ar663d.o ty662.o ty662d.o tr672.o tr672d.o \
	bo666.o bo666d.o ar673.o ar673d.o fi665.o fi665d.o dy677.o dy677d.o \
	co664.o co664d.o to686.o to686d.o sp660.o sp660d.o dy682.o dy682d.o \
	it691.o it691d.o bo685.o bo685d.o re684.o re684d.o ge661.o ge661d.o \
	li667.o li667d.o ar687.o ar687d.o in680.o in680d.o cu668.o cu668d.o \
	ta681.o ta681d.o un683.o un683d.o li678.o li678d.o ba670.o ba670d.o \
	se675.o se675d.o ac669.o ac669d.o it692.o it692d.o re690.o re690d.o \
	co671.o co671d.o na689.o na689d.o bi676.o bi676d.o ar674.o ar674d.o \
	ch679.o ch679d.o 

all::  Cobj21.o

Cobj21.o: $(OBJECTS) Makefile
	$(RM) $@
	$(LD) -r -o $@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

