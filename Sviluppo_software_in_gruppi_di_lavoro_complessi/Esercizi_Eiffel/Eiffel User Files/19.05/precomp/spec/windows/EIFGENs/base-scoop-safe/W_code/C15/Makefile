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

OBJECTS = big_file_C15_c.o 

OLDOBJECTS =  sp474.o sp474d.o ty476.o ty476d.o ty490.o ty490d.o ty491.o ty491d.o \
	tr470.o tr470d.o bo464.o bo464d.o ar471.o ar471d.o fi463.o fi463d.o \
	dy479.o dy479d.o co492.o co492d.o to488.o to488d.o sp475.o sp475d.o \
	dy484.o dy484d.o it494.o it494d.o bo487.o bo487d.o re486.o re486d.o \
	ge473.o ge473d.o li465.o li465d.o ar489.o ar489d.o in482.o in482d.o \
	cu466.o cu466d.o ta483.o ta483d.o un485.o un485d.o li480.o li480d.o \
	ba468.o ba468d.o se477.o se477d.o ty462.o ty462d.o ac467.o ac467d.o \
	re493.o re493d.o co469.o co469d.o bi478.o bi478d.o ar472.o ar472d.o \
	ch481.o ch481d.o 

all::  Cobj15.o

Cobj15.o: $(OBJECTS) Makefile
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

