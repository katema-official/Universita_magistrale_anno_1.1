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
SYSTEM_IN_DYNAMIC_LIB = katabowling$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C2_c.o 

OLDOBJECTS =  eq1008.o eq1008d.o in1001.o in1001d.o in992.o in992d.o ne1019.o \
	ne1019d.o eq1010.o eq1010d.o eq998.o eq998d.o it999.o it999d.o \
	in995.o in995d.o er993.o er993d.o eq1020.o eq1020d.o eq1011.o \
	eq1011d.o ad1014.o ad1014d.o in997.o in997d.o in996.o in996d.o \
	so1000.o so1000d.o ne1018.o ne1018d.o st1017.o st1017d.o da1006.o \
	da1006d.o it994.o it994d.o it1021.o it1021d.o ti1005.o ti1005d.o \
	da1023.o da1023d.o da1004.o da1004d.o ab1007.o ab1007d.o ad1015.o \
	ad1015d.o ex1013.o ex1013d.o ne1002.o ne1002d.o so1016.o so1016d.o \
	du1003.o du1003d.o da1009.o da1009d.o fi1022.o fi1022d.o da1012.o \
	da1012d.o ti1024.o ti1024d.o 

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

