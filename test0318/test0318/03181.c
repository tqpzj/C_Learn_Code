#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define max 10         //#define����ı�ʶ������

enum sex {              //ö�ٳ����Ķ���
	male,
	female
};

int main1() {
	3;    //���泣��:ֱ��д������ֵ
	const int num = 4;    //constָ�����ԣ�numΪconst���εĳ������������ϻ��Ǳ�������ʱnum���ܸ�
	printf("%d\n", num);
	int arr[female] = {0};
	enum sex s = male;    //ö�ٳ����ĵ���
	printf("%d\n", male);
	printf("%d\n", female);
	printf("%d\n", s);
	return 0;
}