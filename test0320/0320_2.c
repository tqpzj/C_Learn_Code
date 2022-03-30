#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main1() {
	int line = 0;
	printf("进入大学\n");
	while (line < 90000) 
	{
		printf("敲一行代码 %d\n", line);
		line++;
	}
	printf("恭喜你学会了C语言\n");
	return 0;
}