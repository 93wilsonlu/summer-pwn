#include <stdio.h>


void main() {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    
	char buf[0x10];
	char name[0x50];
	
	printf("Name addr: %llx\n", name);

    puts("Whats your name?");
    read(0, name, 0x50);

    puts("Write somthing:");
    gets(buf);
}
