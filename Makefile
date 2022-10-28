obj-m += hello.o

KDIR = /lib/modules/6.0.5/build

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	rm -rf *.o *.ko *.mod.* *.symvers *.order