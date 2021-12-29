INCLUDE_PATH =  -I"D:\Programmi\EiffelStudio\library\time\spec\include"
SHELL = /bin/sh
CC = "D:\Programmi\EiffelStudio/gcc/win64/mingw/bin/gcc"
CPP = "D:\Programmi\EiffelStudio/gcc/win64/mingw/bin/gcc"
CFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DWORKBENCH -I"D:\Programmi\EiffelStudio/studio/spec/win64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DWORKBENCH -I"D:\Programmi\EiffelStudio/studio/spec/win64/include" -I. $(INCLUDE_PATH)
LDFLAGS = 
CCLDFLAGS =   -mconsole
LDSHAREDFLAGS =  
EIFLIB = "D:\Programmi\EiffelStudio/studio/spec/win64/lib/mingw/mtwkbench.a"
EIFTEMPLATES = D:\Programmi\EiffelStudio/studio/config/win64/templates
LIBS = 
MAKE = "D:\Programmi\EiffelStudio/gcc/win64/msys/1.0/bin/make.exe"
AR = "D:\Programmi\EiffelStudio/gcc/win64/mingw/bin/ar"
LD = "D:\Programmi\EiffelStudio/gcc/win64/mingw/bin/ld"
MKDEP =   --
MV = "D:\Programmi\EiffelStudio/gcc/win64/msys/1.0/bin/cp"
CP = "D:\Programmi\EiffelStudio/gcc/win64/msys/1.0/bin/cp"
RANLIB = "D:\Programmi\EiffelStudio/gcc/win64/mingw/bin/ranlib.exe"
RM = "D:\Programmi\EiffelStudio/gcc/win64/msys/1.0/bin/rm" -f
FILE_EXIST = 
RMDIR = "D:\Programmi\EiffelStudio/gcc/win64/msys/1.0/bin/rd"
X2C = "D:\Programmi\EiffelStudio/studio/spec/win64/bin/x2c.exe"
SHAREDLINK = "D:\Programmi\EiffelStudio/gcc/win64/mingw/bin/dllwrap"
SHAREDLIBS = -luser32 -lws2_32 -ladvapi32 -lgdi32 -lshell32 -lmsimg32 -lcomdlg32 -luuid -lole32 -loleaut32 -lcomctl32 -lmpr -lshlwapi -lwinspool -lstdc++ 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = "D:\Programmi\EiffelStudio/gcc/win64/msys/1.0/bin/touch" finished
PATH := D:\Programmi\EiffelStudio/gcc/win64/mingw/libexec/gcc/mingw32/3.4.2;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Windows\System32\OpenSSH\;C:\Program Files (x86)\NVIDIA Corporation\PhysX\Common;C:\Program Files\NVIDIA Corporation\NVIDIA NvDLISR;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Windows\System32\OpenSSH\;D:\Programmi\Git\cmd;C:\Users\mirag\AppData\Local\Microsoft\WindowsApps; 
SYSTEM_IN_DYNAMIC_LIB = ringbuffer.dll 

.SUFFIXES:.cpp .o 

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = eoption.o epattern.o efrozen.o ecall.o eplug.o eskelet.o enames.o \
	evisib.o ececil.o einit.o eparents.o 

all::  $(OBJECTS)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

