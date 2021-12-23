case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C23"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH = 
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $mtccflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $mtcppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $windows_flags
LDSHAREDFLAGS =  $mtldsharedflags
EIFLIB = "$rt_lib/$prefix$mt_prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $mtlibs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = mingw\driver.exe$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C23_c.o 

OLDOBJECTS =  sp746.o sp746d.o ar729.o ar729d.o ar757.o ar757d.o ty728.o ty728d.o \
	ty745.o ty745d.o ty756.o ty756d.o ar730.o ar730d.o dy734.o dy734d.o \
	co758.o co758d.o to743.o to743d.o sp726.o sp726d.o sp754.o sp754d.o \
	dy739.o dy739d.o it749.o it749d.o bo742.o bo742d.o re741.o re741d.o \
	ge727.o ge727d.o ge755.o ge755d.o ar744.o ar744d.o in737.o in737d.o \
	ta738.o ta738d.o un740.o un740d.o in751.o in751d.o li735.o li735d.o \
	se732.o se732d.o ty753.o ty753d.o it750.o it750d.o re748.o re748d.o \
	na747.o na747d.o bi733.o bi733d.o re752.o re752d.o ar731.o ar731d.o \
	ch736.o ch736d.o 

all: Cobj23.o

Cobj23.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj23.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

