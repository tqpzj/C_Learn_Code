#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main0() {
	int input = 0;
	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
	scanf("%d", &input);
	if (input == 1)
		printf("����\n");
	else
		printf("������\n");
	return 0;
}