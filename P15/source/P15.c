﻿#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE* fptr1, * fptr2;
	char ch;
	fptr1 = fopen_s("‪C:\\Welcome.txt", "r",60);
	fptr2 = fopen_s("C:\\output.txt", "w",60);
	if ((fptr1 != NULL) && (fptr2 != NULL))
	{
		while ((ch = getc(fptr1)) != EOF)
		{
			putc(ch, fptr2);
		}
		fclose(fptr1);
		fclose(fptr2);
		printf("檔案拷貝完成!!\n");
	}
	else
		printf("檔案拷貝失敗!!\n");
	system("pause");
	return 0;
}