#include <stdio.h>

void main() {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);

    char buf[0x10];

    puts("Write somthing:");
    gets(buf);
}
