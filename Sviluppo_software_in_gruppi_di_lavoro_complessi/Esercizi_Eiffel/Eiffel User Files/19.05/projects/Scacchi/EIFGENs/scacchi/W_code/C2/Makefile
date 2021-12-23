INCLUDE_PATH =  -I"C:\Program Files (x86)\Eiffel Software\EiffelStudio 19.05 GPL\library\time\spec\include"
SHELL = /bin/sh
CC = "C:\Program Files (x86)\Eiffel Software\EiffelStudio 19.05 GPL/gcc/windows/mingw/bin/gcc"
CPP = "C:\Program Files (x86)\Eiffel Software\EiffelStudio 19.05 GPL/gcc/windows/mingw/bin/gcc"
CFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DWORKBENCH -I"C:\Program Files (x86)\Eiffel Software\EiffelStudio 19.05 GPL/studio/spec/windows/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DWORKBENCH -I"C:\Program Files (x86)\Eiffel Software\EiffelStudio 19.05 GPL/studio/spec/windows/include" -I. $(INCLUDE_PATH)
LDFLAGS = 
CCLDFLAGS =   -mconsole
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
SYSTEM_IN_DYNAMIC_LIB = scacchi.dll 

.SUFFIXES:.cpp .o 

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C2_c.o 

OLDOBJECTS =  eq1011.o eq1011d.o eq1013.o eq1013d.o in1004.o in1004d.o in995.o \
	in995d.o ne1022.o ne1022d.o eq1001.o eq1001d.o in998.o in998d.o \
	it1002.o it1002d.o er996.o er996d.o eq1023.o eq1023d.o eq1014.o \
	eq1014d.o da1009.o da1009d.o in993.o in993d.o ad1017.o ad1017d.o \
	in994.o in994d.o in1000.o in1000d.o in999.o in999d.o in992.o in992d.o \
	so1003.o so1003d.o ne1021.o ne1021d.o st1020.o st1020d.o it997.o \
	it997d.o it1024.o it1024d.o da1008.o da1008d.o ti1007.o ti1007d.o \
	ab1010.o ab1010d.o du1006.o du1006d.o ad1018.o ad1018d.o ex1016.o \
	ex1016d.o ne1005.o ne1005d.o so1019.o so1019d.o da1012.o da1012d.o \
	da1015.o da1015d.o 

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

