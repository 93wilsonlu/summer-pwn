#include <stdio.h>

void gadget() {
	asm("pop %rdi\nret");
}

void main() {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    
	char buf[0x10];
	
    puts("Write somthing:");
    gets(buf);
}
