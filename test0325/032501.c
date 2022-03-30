#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

extern int Judge(int x);

int main0() 
{
	int age;
	printf("请输入你的年龄:");
	scanf("%d", &age);
	if (age < 18)
		printf("你的年龄是%d岁，未成年\n", age);
	else if (18 <= age & age <= 60)
		printf("你的年龄是%d岁，是青壮年\n", age);
	else
		printf("你的年龄是%d岁，属于老年\n", age);
	return 0;
}

int main1()
{
	int num;           //判断数字的奇偶
	printf("请输入数字：");
	scanf("%d", &num);
	Judge(num);
	return 0;
}

int main2()
{
	int num = 1;       //输出1-100的奇数
	for (num = 1; num <= 100; num++)
	{
		if (1 == num % 2)
			printf("%d\n", num);
	}
	return 0;
}

int main3()
{
	int day;
	printf("请输入天数：");
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("今天是星期1\n");
		break;
	case 2:
		printf("今天是星期2\n");
		break;
	case 3:
		printf("今天是星期3\n");
		break;
	case 4:
		printf("今天是星期4\n");
		break;
	case 5:
		printf("今天是星期5\n");
		break;
	case 6:
		printf("今天是星期6\n");
		break;
	case 7:
		printf("今天是星期日\n");
		break;
	}
	return 0;
}

int main4()
{
	int day;
	printf("请输入天数：");
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("今天是工作日\n");
		break;
	case 6:
	case 7:
		printf("今天是休息日\n");
		break;
	default:
		printf("输入错误\n");
		break;
	}
	return 0;
}

int main5() 
{
	int num = 1;
	while (num <= 10)
	{
		if (num == 5)
			continue;
		printf("%d\n", num);
		num++;
	}
	return 0;
}

int m5()
{
	int ch = 0;
	while ((ch=getchar()) != EOF)    //EOF就是ctrl + z
	{
		putchar(ch);
	}
	return 0;
}

int main6()
{
	int ch = 0;
	while ((ch=getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')       
			continue;
		putchar(ch);
	}
	return 0;
}

int main7()
{
	for (int i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d\n", i);
	}
	return 0;
}

int main()
{
	int i = 1;
	do
	{
		printf("%d\n", i);
		i++;
	}
	while (i <= 10);
	return 0;
}