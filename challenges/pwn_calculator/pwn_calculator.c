#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void win() {
	system("cat flag.txt");
}

void main() {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    srand(time(0));

    long long a, b, c, ans, op;
    for (int i = 0; i < 100; i++) {
        a = rand();
        b = rand();
        op = rand() % 4;

        switch (op) {
            case 0:
                printf("%d + %d = ?\n", a, b);
                ans = a + b;
                break;
            case 1:
                printf("%d - %d = ?\n", a, b);
                ans = a - b;
                break;
            case 2:
                printf("%d * %d = ?\n", a, b);
                ans = a * b;
                break;
            case 3:
                printf("%d / %d = ?\n", a, b);
                ans = a / b;
                break;
            default:
                break;
        }

        scanf("%lld", &c);
        if (ans != c) {
            printf("Wrong answer!");
            return;
        }
    }
    win();
}
