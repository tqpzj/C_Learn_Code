#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "add.h"
#include "print.h"
#include "mystringlen.h"
#include "factorial.h"

//int main0()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//
//int main1()
//{
//	printf("hehe\n");
//	//main();
//	return 0;
//}
//
//int main2()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//
//int main3()
//{
//	char arr[] = "WH";
//	int len = mystringlen1(arr);
//	printf("len=%d\n", len);
//	return 0;
//}
//
//int main3()
//{
//	int i = 0;
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8} };
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i,j, &arr[i]);
//		}
//	
//	}
//	return 0;
//}

void bubble_sort(int arr[], int sz)
{
	//ȷ��ð�����������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1; //������һ��Ҫ����������Ѿ�����
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;    //������������ݲ���ȫ����
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}