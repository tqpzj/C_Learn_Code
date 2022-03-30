#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

int main0()
{
	int i = 1;
	long int s = 1;
	for (i = 1;i<10 ; i++)
	{
		s = s * i;
		printf("%d\n", s);
	}
	return 0;
}

int main1()
{
	int i = 1;
	int j = 1;
	long m = 0;
	long ret = 1;
	for (i = 1;i<=3 ; i++)
	{
		ret = 1;
		for (j = 1; j<=i ; j++)
		{
			ret = ret * j;
		}
		m = m + ret;
		printf("%d\n", m);
	}
	return 0;
}

int main2()
{
	int i = 1;
	int j = 1;
	long m = 0;
	long ret = 1;
	for (i = 1; i <= 3; i++)
	{
		ret = ret * i;
		
		m = m + ret;
		printf("%d\n", m);
	}
	return 0;
}

int main3()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	
	while (right - left >= 0)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到\n");
	return 0;
}

int main5()
{
	char arr1[] = "welcome to wut!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");    //执行系统命令函数
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}

int main()
{
	int i = 0;
	char password[20] = {0};
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)   //==不能用来比较两个字符串是否相等
		{
			printf("密码正确，登录成功\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入\n");
		}
	}
	if (i == 3)
		printf("已连续输错三次，系统锁定，请24小时之后重新输入\n");
	return 0;
}