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
echo "Compiling C code in C2"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(ISE_LIBRARY)\library\time\spec\include"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $mtccflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $mtcppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $console_flags
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
SYSTEM_IN_DYNAMIC_LIB = scacchi$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

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

all: Cobj2.o

Cobj2.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj2.o $(OBJECTS)
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

