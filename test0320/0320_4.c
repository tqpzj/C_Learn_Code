#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("��Ҫ��ӡ��5��Ԫ�أ�%d\n", arr[4]);
	printf("��������˳���ӡ���������ÿ��Ԫ�أ�\n");
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	printf("��ӡ���\n");
	return 0;
}