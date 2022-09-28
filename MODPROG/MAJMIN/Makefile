obj-m	:= static_alloc.o
obj-m	+= dynamic_alloc.o

all:
	make -C /lib/modules/`uname -r`/build M=`pwd` modules 

clean:
	make -C /lib/modules/`uname -r`/build M=`pwd` clean
