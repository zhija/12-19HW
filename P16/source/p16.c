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
	printf("請輸入字串，案enter結束輸入:\n");
	while ((ch = getche()) != enter && i < max)
		str[i++] = ch;
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("檔案附加完成!!\n");
	system("pause");
	return  0;



}