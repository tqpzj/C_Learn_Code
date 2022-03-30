#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Judge(int x)
{
	if (1 == x % 2)
		printf("这个数是奇数");
	else
		printf("这个数是偶数");
}
