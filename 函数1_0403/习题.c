#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int is_prime(int x)
{
	int j = 0;
	for (j = 2; j < x; j++)
	{
		if (x % j == 0)
		{
			return 0;
		}
	}
	if (j == x)
		return 1;
}

int is_run(int y)
{
	if (y % 4 == 0 && y % 100 != 0)
		return 1;
	if(y % 400 == 0)
		return 1;
}

int main0()
{
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (is_run(i) == 1)
			printf("%d\n", i);
	}
	return 0;
}

int Dichotomy(int arr[], int k, int sz)
{
	//实际上这里传参传的是数组首元素的地址,无法在函数体内部求数组的长度
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid-1;
		}
		else if (arr[mid] < k)
		{
			left = mid+1;
		}
		else 
			return mid;
	}
	if (left > right)
		return -1;
}


int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 11;
	int label = 0;
	label = Dichotomy(arr, k, sz);
	if (label == -1)
		printf("找不到指定数字");
	else
		printf("k对应的数字是数组的第%d个元素", label);
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}
