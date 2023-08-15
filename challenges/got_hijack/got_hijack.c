#include <stdio.h>

long magic = 0;

void win() {
    system("/bin/sh");
}

void main() {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    
    char buf[0x10];
    long *ptr = &magic;

    puts("Write somthing:");
    gets(buf);
    
    puts("Give me magic number:");
    scanf("%ld", ptr);
    
    printf("Magic: %ld\n", magic);

    exit(0);
}
