cmd_/home/ubuntu/kernel/param/param.ko := ld -r -m elf_x86_64 -T /usr/src/linux-headers-3.13.0-35-generic/scripts/module-common.lds --build-id  -o /home/ubuntu/kernel/param/param.ko /home/ubuntu/kernel/param/param.o /home/ubuntu/kernel/param/param.mod.o
