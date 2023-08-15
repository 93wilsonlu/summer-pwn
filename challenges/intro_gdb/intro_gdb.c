#include <stdio.h>
#include <string.h>

int main() {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    
    char flag[] = "f0tgm40ehn_ohcei}_3N<l__{na>_a5t", tmp;
    int a[] = {5,  10, 26, 28, 20, 4,  25, 2,  12, 13, 17, 31, 3,  19, 2,  8,
               25, 8,  11, 24, 13, 15, 24, 23, 19, 12, 24, 3,  24, 2,  25, 7},
        b[] = {8,  10, 7,  20, 2, 24, 1,  21, 11, 1, 8,  16, 5,  13, 1,  19,
               18, 7,  22, 21, 5, 17, 20, 17, 7,  2, 21, 13, 30, 8,  10, 17},
        len = strlen(flag);
    
    for (int i = 0; i < len; i++) {
        tmp = flag[a[i]];
        flag[a[i]] = flag[b[i]];
        flag[b[i]] = tmp;
    }
    puts(flag);
}
