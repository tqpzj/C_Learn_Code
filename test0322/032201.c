#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

extern int Add(int, int);
extern int Max(int, int);

int main()
{
	int num1 = 10;
	int num2 = 20;
	int max = 0;
	int sum = 0;
	int a = 10;
	int m = 10;
	int b = a++;    //后置++：先将a赋值给b，然后a再加1
	int c = ++m;    //前置++：m先自己加1，再赋值给c
	max = Max(num1, num2);
	sum = Add(num1, num2);
	printf("最大值=%d\n", max);
	printf("和=%d\n", sum);
	printf("a=%d, b=%d, c=%d, m=%d\n", a, b, c, m);
	return 0;
}

int main0()
{
	int a = 3;
	int b = 5;
	int d = 0;
	int c = a && b;
	int e = b || d;
	int max;
	max = a > b ? a : b;
	printf("c=%d\n", c);
	printf("e=%d\n", e);
	printf("max=%d\n", max);
	return 0;
}