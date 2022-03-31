#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>


//1.写代码将三个数从大到小输出
int main1()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d", a, b, c);
	return 0;
}


//2.打印3的倍数
int main2()
{
	int num = 0;
	scanf("%d", &num);
	if (num % 3 == 0)
	{
		printf("%d", num);
	}
	else
	{
		printf("%d不是3的倍数", num);
	}
	return 0;
}


//3.写一个代码打印1-100之间所有3的倍数的数字
int main3()
{
	int i = 0;
	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}

//4.打印两个数的最大公约数
int main4()
{
	int num1 = 0;
	int num2 = 0;
	int r = 0;
	scanf("%d%d", &num1, &num2);
	while (num1 % num2 != 0)
	{
		r = num1 % num2;
		num1 = num2;
		num2 = r;
	}
	printf("最大公约数是%d", r);
	return 0;
}


//5.打印1000-2000之间的闰年
//闰年：能被4整除的非世纪年;能被400整除的年份
int main5()
{
	int i = 0;
	for (i = 1001; i < 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0)
			printf("%d\n", i);
		else if (i % 400 == 0)
			printf("%d\n", i);
	}
	return 0;
}


//6.打印100-200之间的素数
//试除法：不能被2至根号i的数整除
int main6()
{
	int i = 0;
	int num = 0;
	for (i = 101; i <= 200; i+=2)
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
				break;
		}
		if (j > sqrt(i))
		{
			printf("%d\n", i);
			num++;
		}
	}
	printf("\n num=%d\n", num);
	return 0;
}


//7.计算1/1-1/2+1/3-1/4+......-1/100的结果
int main7()
{
	int i = 0;
	int flag = 1;
	double sum = 0.0;
	for (i = 1; i < 101; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}


//8.打印99乘法口诀表
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d  ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}