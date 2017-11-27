#ifneq ($(KERNELRELEASE),)
obj-m := kernel_module_hello.o kernel_module_hello2.o
#final-objs:=kernel_module_hello.o kernel_module_hello2.o
#else
KDIR := /lib/modules/$(shell uname -r)/build
#PWD:=$(shell pwd)
all:
	make -C $(KDIR) M=$(PWD) modules
clean:
	rm -f *.ko *.o *.symvers *.cmd *.cmd.o
#endif
