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
	int b = a++;    //����++���Ƚ�a��ֵ��b��Ȼ��a�ټ�1
	int c = ++m;    //ǰ��++��m���Լ���1���ٸ�ֵ��c
	max = Max(num1, num2);
	sum = Add(num1, num2);
	printf("���ֵ=%d\n", max);
	printf("��=%d\n", sum);
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