#include <stdio.h>

int main01() {
	//printf("%zd\n", sizeof(char));
	//printf("%zd\n", sizeof(int));
	//printf("%zd\n", sizeof(short));
	//printf("%zd\n", sizeof(long));
	//printf("%zd\n", sizeof(long long));
	//printf("%zd\n", sizeof(float));
	//printf("%zd\n", sizeof(double));
	//short age = 20;
	//float weight = 95.6f;

	// 计算两个数的和
	short a = 2;
	short b = 12;
	int num1=0;
	int num2=0;
	//printf("%d\n", a + b);
	// 使用输入函数
	scanf_s("%d%d", &num1, &num2);
	int sum=0;
	sum = num1 + num2;
	printf("sum=%d", sum);
	return 0;
}