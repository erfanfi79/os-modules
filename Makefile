obj-m += hello.o

KDIR = /usr/src/linux-headers-5.15.0-52

all:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules

clean:
	rm -rf *.o *.ko *.mod.* *.symvers *.order