#include <stdio.h>
#include <string.h>

void main() {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    
	char flag[] = "}!gnisrever_tsrif_yM{galf", tmp;
	int len = strlen(flag);
	for (int i = 0; i < len/2; i++) {
		tmp = flag[i];
		flag[i] = flag[len - i - 1];
		flag[len - i - 1] = tmp;
	}
	
	puts("No flag for you!");
}
