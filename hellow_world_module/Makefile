KDIR= /lib/modules/$(shell uname -r)/build

obj-m += hello.o

default:
	make -C $(KDIR) M=$(PWD) modules
clean:	
	make -C $(KDIR) M=$(PWD) clean
