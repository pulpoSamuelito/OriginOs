#nasm -f elf32 kernel.asm -o oasm.o
gcc -m32 -c kernel.c -o oc.o
ld -m elf_i386 -T link.ld -o kernel.bin oasm.o oc.o
qemu-system-x86_64 -kernel kernel.bin
