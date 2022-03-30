#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main2() {
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d\n", &num1);
	scanf("%d", &num2);
	sum = Add(num1, num2);
	printf("sum = %d\n", sum);
	return 0;
}