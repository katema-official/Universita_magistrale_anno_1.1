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

OBJECTS = big_file_C18_c.o 

OLDOBJECTS =  ty576.o ty576d.o ty577.o ty577d.o ty582.o ty582d.o ty583.o ty583d.o \
	ty586.o ty586d.o ty587.o ty587d.o ty590.o ty590d.o ty591.o ty591d.o \
	ty578.o ty578d.o ty584.o ty584d.o ty588.o ty588d.o ty592.o ty592d.o \
	dy561.o dy561d.o to570.o to570d.o dy566.o dy566d.o bo569.o bo569d.o \
	ta573.o ta573d.o re568.o re568d.o rt593.o rt593d.o ar571.o ar571d.o \
	ce580.o ce580d.o in564.o in564d.o ta565.o ta565d.o un567.o un567d.o \
	ha572.o ha572d.o li562.o li562d.o rt575.o rt575d.o rt579.o rt579d.o \
	rt581.o rt581d.o rt585.o rt585d.o rt589.o rt589d.o ta574.o ta574d.o \
	ch563.o ch563d.o 

all::  Cobj18.o

Cobj18.o: $(OBJECTS) Makefile
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

