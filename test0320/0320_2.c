#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main1() {
	int line = 0;
	printf("�����ѧ\n");
	while (line < 90000) 
	{
		printf("��һ�д��� %d\n", line);
		line++;
	}
	printf("��ϲ��ѧ����C����\n");
	return 0;
}