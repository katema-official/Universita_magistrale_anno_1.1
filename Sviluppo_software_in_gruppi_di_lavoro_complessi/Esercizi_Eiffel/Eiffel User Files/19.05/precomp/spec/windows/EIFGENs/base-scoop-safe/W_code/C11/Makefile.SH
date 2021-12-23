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
echo "Compiling C code in C11"
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

OBJECTS = big_file_C11_c.o 

OLDOBJECTS =  ar331.o ar331d.o ar356.o ar356d.o ty330.o ty330d.o tr340.o tr340d.o \
	bo334.o bo334d.o ar341.o ar341d.o fi333.o fi333d.o dy345.o dy345d.o \
	co332.o co332d.o co358.o co358d.o to354.o to354d.o dy350.o dy350d.o \
	it361.o it361d.o bo353.o bo353d.o re352.o re352d.o li335.o li335d.o \
	ar355.o ar355d.o in348.o in348d.o cu336.o cu336d.o ta349.o ta349d.o \
	un351.o un351d.o in362.o in362d.o li346.o li346d.o ba338.o ba338d.o \
	se343.o se343d.o ac337.o ac337d.o it359.o it359d.o re360.o re360d.o \
	co339.o co339d.o na357.o na357d.o bi344.o bi344d.o ar342.o ar342d.o \
	ch347.o ch347d.o 

all: Cobj11.o

Cobj11.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj11.o $(OBJECTS)
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

