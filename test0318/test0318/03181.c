#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define max 10         //#define定义的标识符常量

enum sex {              //枚举常量的定义
	male,
	female
};

int main1() {
	3;    //字面常量:直接写出来的值
	const int num = 4;    //const指常属性，num为const修饰的常变量，本质上还是变量，此时num不能改
	printf("%d\n", num);
	int arr[female] = {0};
	enum sex s = male;    //枚举常量的调用
	printf("%d\n", male);
	printf("%d\n", female);
	printf("%d\n", s);
	return 0;
}