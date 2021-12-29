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

OBJECTS = big_file_C2_c.o 

OLDOBJECTS =  eq1006.o eq1006d.o ne1017.o ne1017d.o in999.o in999d.o eq1008.o \
	eq1008d.o eq996.o eq996d.o it997.o it997d.o in993.o in993d.o in995.o \
	in995d.o ne1016.o ne1016d.o st1015.o st1015d.o eq1018.o eq1018d.o \
	eq1009.o eq1009d.o ad1012.o ad1012d.o in994.o in994d.o so998.o \
	so998d.o da1004.o da1004d.o it1019.o it1019d.o it992.o it992d.o \
	ne1000.o ne1000d.o so1014.o so1014d.o ti1023.o ti1023d.o ti1003.o \
	ti1003d.o da1021.o da1021d.o da1002.o da1002d.o ab1005.o ab1005d.o \
	ad1013.o ad1013d.o ex1011.o ex1011d.o du1001.o du1001d.o da1010.o \
	da1010d.o da1024.o da1024d.o ti1022.o ti1022d.o da1007.o da1007d.o \
	fi1020.o fi1020d.o 

all::  Cobj2.o

Cobj2.o: $(OBJECTS) Makefile
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

