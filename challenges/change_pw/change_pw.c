#include <stdio.h>

void win() {
    system("/bin/sh");
}

void main() {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    
    char buf[0x10];
    long pw = 0x3fffffff;

    puts("Write somthing:");
    gets(buf);

    if (pw == 0xdeadbeef) {
        win();
    }
}
