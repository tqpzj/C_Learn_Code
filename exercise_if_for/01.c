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
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ���\n");
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
		system("cls");    //ִ��ϵͳ�����
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
		printf("���������룺>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)   //==���������Ƚ������ַ����Ƿ����
		{
			printf("������ȷ����¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�����������������\n");
		}
	}
	if (i == 3)
		printf("������������Σ�ϵͳ��������24Сʱ֮����������\n");
	return 0;
}