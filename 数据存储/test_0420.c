#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	//指针类型的意义：
//1，指针类型决定了指针解引用操作符能访问几个字节：char*p；*p访问了1个字节，int*p；*p访问4个字节
//2.指针类型决定了指针+1，-1，加的或者减的是几个字节；char'p；p+1，跳过一个字符，int'p；p+1，跳过一个整形-4个字节
	if (*p == 1)
	{
		return 1;//1:小端
	}
	else
	{
		return 0;//0:大端
	}
}

int main0()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端");
	}
	else
	{
		printf("大端");
	}
	return 0;
}

int main1()
{
	char a =-1;
	signed char b = -1;
	unsigned char c = -1;
	printf("a=%d,b=%d,c=%d",a,b,c);

	return 0; 
}

int main2()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}

int main()
{
	float a = 5.5;
	return 0;
}