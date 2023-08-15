#include <stdio.h>

void win() {
    system("/bin/sh");
}

void main() {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    
    char buf[0x10];
    long is_admin = 0;
    
    puts("Write somthing:");
    gets(buf);

    if (is_admin) {
        win();
    }
}
