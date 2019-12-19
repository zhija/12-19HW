#include<stdio.h>
#include<stdlib.h>
#define max 80

int main(void) {
	FILE* fptr;
	char str[max], ch;
	int i = 0;
	fptr = fopen("output.txt", "r");
	while (!feof(fptr)) {
		i = fread(str, sizeof(char), max - 1, fptr);
		str[i] = '\0';
		printf("%s", str);
	}
	fclose(fptr);

	system("pause");
	return  0;



}