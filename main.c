#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Start of Program");

	FILE *fptr = fopen("AlicesAdventuresInWonderland.epub", "r");

	if (fptr == NULL) {
		printf("ERROR");
		exit(1);
	}

	char c = fgetc(fptr);
	while (c != EOF) {
		printf("%C", c);
		c = fgetc(fptr);
	}

	return 0;
}

