#include <stdio.h>

char name[0x10];

void main() {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    system("echo -n 'Hi! '");

    char buf[0x10];

    puts("Whats your name?");
    read(0, name, 0x10);

    puts("Write somthing:");
    gets(buf);
}
