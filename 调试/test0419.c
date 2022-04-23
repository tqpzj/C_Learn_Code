#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 15; i++)
	{
		printf("hello world\n");
		arr[i] = 0;
	}
	return 0;
}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}