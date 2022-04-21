#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main0()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(long*));
	return 0;
}

int main1()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pa+1);
	printf("%p\n", pc);
	printf("%p\n", pc+1);
	return 0;
}

int main2()
{
	int arr[10] = {0};
	char* p = arr;    //数组名等于首元素地址
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}
	return 0;
}

int main3()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 10;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	for (i = 0; i < sz; i++)
	{
		printf("%d", *p);
		p = p + 1;
	}
	return 0;
}

int main4()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	printf("%d\n", &arr[9] - &arr[0]);
	return 0;
}

int mystlen(char* str)
{
	char* start = str;
	char* end = str;
	while (* end != '\0')
	{
		end++;
	}
	return end - start;
}

int main5()
{
	char ch[] = "bit";
	int len = mystlen(ch);
	printf("%d\n", len);
	return 0;
}

int main6()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	return 0;
}

int main7()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 10;
	int* p = arr;
	for (i = 0; i < 10; i++)
	{
		printf("%p ==========>> %p\n", p + i, &arr[i]);
	}
	return 0; 
}

int main()
{
	int arr[10] = { 0 };
	int i = 10;
	int* p = arr;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0; 
}