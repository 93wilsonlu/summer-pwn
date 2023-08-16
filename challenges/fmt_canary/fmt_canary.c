#include <stdio.h>

char name[0x50];

void win() {
    __asm__("push %rax");
    system("/bin/sh");
}

void main() {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    
    char buf[0x10];

    puts("Whats your name?");
    read(0, name, 0x50);
    printf(name);

    puts("Write somthing:");
    gets(buf);
}
