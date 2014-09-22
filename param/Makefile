KDIR= /lib/modules/$(shell uname -r)/build

obj-m += param.o

default:
	make -C $(KDIR) M=$(PWD) modules
clean :
	make -C $(KDIR) M=$(PWD) clean
