#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define enter 13
#define max 80

int main(void) {
	FILE* fptr;
	char str[max], ch;
	int i = 0;
	fptr = fopen("output.txt", "a");
	printf("�п�J�r��A��enter������J:\n");
	while ((ch = getche()) != enter && i < max)
		str[i++] = ch;
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("�ɮת��[����!!\n");
	system("pause");
	return  0;



}