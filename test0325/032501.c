#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

extern int Judge(int x);

int main0() 
{
	int age;
	printf("�������������:");
	scanf("%d", &age);
	if (age < 18)
		printf("���������%d�꣬δ����\n", age);
	else if (18 <= age & age <= 60)
		printf("���������%d�꣬����׳��\n", age);
	else
		printf("���������%d�꣬��������\n", age);
	return 0;
}

int main1()
{
	int num;           //�ж����ֵ���ż
	printf("���������֣�");
	scanf("%d", &num);
	Judge(num);
	return 0;
}

int main2()
{
	int num = 1;       //���1-100������
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
	printf("������������");
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����������1\n");
		break;
	case 2:
		printf("����������2\n");
		break;
	case 3:
		printf("����������3\n");
		break;
	case 4:
		printf("����������4\n");
		break;
	case 5:
		printf("����������5\n");
		break;
	case 6:
		printf("����������6\n");
		break;
	case 7:
		printf("������������\n");
		break;
	}
	return 0;
}

int main4()
{
	int day;
	printf("������������");
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("�����ǹ�����\n");
		break;
	case 6:
	case 7:
		printf("��������Ϣ��\n");
		break;
	default:
		printf("�������\n");
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
	while ((ch=getchar()) != EOF)    //EOF����ctrl + z
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