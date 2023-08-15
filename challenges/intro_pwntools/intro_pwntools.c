#include <stdio.h>
#include <string.h>
#include <algorithm>

void win() {
	system("cat flag.txt");
}

int main() {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    
	char secret[] = "Lopadotemachoselachogaleokranioleipsanodrimhypotrimmatosilphioparaomelitokatakechymenokichlepikossyphophattoperisteralektryonoptekephalliokigklopeleiolagoiosiraiobaphetraganopterygon", input[200];
	printf("Sort my secret lexicographically: %s\n", secret);
	scanf("%s", input);
	
	int len = strlen(secret);
	std::sort(secret, secret+len);
	if (strcmp(secret, input) == 0) {
		win();
	}
	return 0;
}
