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

//�����ṹ������
struct Book
{
	char name[20];
	double price;
};

int main()
{
	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
	struct Book b1 = { "C���Գ������", 29.9 };
	struct Book* pb = &b1;
	printf("������%s\n", (*pb).name);
	printf("�۸�%lf\n", (*pb).price);
	printf("������%s\n", b1.name);
	printf("�۸�%lf\n", b1.price);
	printf("������%s\n", pb->name);
	printf("�۸�%lf\n", pb->price);
	b1.price = 50;
	printf("���ĺ�ļ۸�%lf\n", b1.price);
	strcpy(b1.name, "c++");
	printf("���ĺ��������%s\n", b1.name);
	return 0;
}