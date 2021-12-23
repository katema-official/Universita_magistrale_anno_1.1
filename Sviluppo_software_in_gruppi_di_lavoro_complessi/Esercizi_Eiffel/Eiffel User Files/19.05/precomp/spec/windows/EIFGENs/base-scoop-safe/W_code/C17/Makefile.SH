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
echo "Compiling C code in C17"
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

OBJECTS = big_file_C17_c.o 

OLDOBJECTS =  sp538.o sp538d.o ar547.o ar547d.o ty528.o ty528d.o ty529.o ty529d.o \
	ty532.o ty532d.o ty533.o ty533d.o ty530.o ty530d.o ty534.o ty534d.o \
	ty537.o ty537d.o tr556.o tr556d.o bo550.o bo550d.o ar557.o ar557d.o \
	fi549.o fi549d.o co548.o co548d.o sp545.o sp545d.o ha536.o ha536d.o \
	it541.o it541d.o ge546.o ge546d.o li551.o li551d.o cu552.o cu552d.o \
	in542.o in542d.o ba554.o ba554d.o se559.o se559d.o ty544.o ty544d.o \
	ac553.o ac553d.o rt531.o rt531d.o rt535.o rt535d.o re540.o re540d.o \
	co555.o co555d.o na539.o na539d.o bi560.o bi560d.o re543.o re543d.o \
	ar558.o ar558d.o 

all: Cobj17.o

Cobj17.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj17.o $(OBJECTS)
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

