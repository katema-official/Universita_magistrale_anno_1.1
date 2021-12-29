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

OBJECTS = big_file_C1_c.o 

OLDOBJECTS =  ap960.o ap960d.o eq969.o eq969d.o in990.o in990d.o eq968.o eq968d.o \
	it976.o it976d.o er991.o er991d.o eq967.o eq967d.o eq966.o eq966d.o \
	in988.o in988d.o eq965.o eq965d.o ad975.o ad975d.o in989.o in989d.o \
	in987.o in987d.o it986.o it986d.o eq964.o eq964d.o so974.o so974d.o \
	c_963.o c_963d.o da984.o da984d.o da983.o da983d.o it962.o it962d.o \
	so973.o so973d.o pa961.o pa961d.o ti980.o ti980d.o ti979.o ti979d.o \
	da981.o da981d.o da982.o da982d.o gr972.o gr972d.o ti978.o ti978d.o \
	co985.o co985d.o ti977.o ti977d.o da971.o da971d.o da970.o da970d.o 

all::  Cobj1.o

Cobj1.o: $(OBJECTS) Makefile
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

