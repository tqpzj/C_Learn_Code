#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int sum(int a)
{
	int c = 0;
	static int b = 3;
	c += 1;
	b += 2;
	return (a + b + c);
}

int main0()
{
	int i;
	int a = 2;
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", sum(a));
	}
}


int main1() {
	int a = 10;
	printf("%p\n", &a);
	int* p = &a;
	printf("%p\n", &a);
	*p = 200;
	printf("a=%d\n", a);
	printf("%d\n", sizeof(p));
	return 0;
}

//创建结构体类型
struct Book
{
	char name[20];
	double price;
};

int main()
{
	//利用结构体类型创建一个该类型的结构体变量
	struct Book b1 = { "C语言程序设计", 29.9 };
	struct Book* pb = &b1;
	printf("书名：%s\n", (*pb).name);
	printf("价格：%lf\n", (*pb).price);
	printf("书名：%s\n", b1.name);
	printf("价格：%lf\n", b1.price);
	printf("书名：%s\n", pb->name);
	printf("价格：%lf\n", pb->price);
	b1.price = 50;
	printf("更改后的价格：%lf\n", b1.price);
	strcpy(b1.name, "c++");
	printf("更改后的书名：%s\n", b1.name);
	return 0;
}