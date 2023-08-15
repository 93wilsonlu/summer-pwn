#include <stdio.h>

long array[5] = {0};

void win() {
	system("/bin/sh");
}

int main() {
	setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    
    int idx;
    while(1){
        printf("index: ");
        scanf("%d", &idx);
        printf("value: ");
        scanf("%lld", &array[idx]);
        for (int i = 0; i < 5; ++i) {
            printf("%lld ", array[i]);
        }
        puts("");
    }
}
