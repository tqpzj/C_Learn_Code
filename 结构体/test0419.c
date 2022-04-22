#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

typedef struct Stu
{
	char name[20];
	short age;
	char tel[12];
	char sex[5];
}Stu;


//typedef struct T
//{
//	char ch[10];
//	Stu s;
//	char* pc;
//}T;

void print1(Stu tmp)
{
	printf("name:%s\n", tmp.name);
	printf("age:%d\n", tmp.age);
	printf("tel:%s\n", tmp.tel);
	printf("sex:%s\n", tmp.sex);
}

void print2(Stu* tmp)
{
	printf("name:%s\n", tmp->name);
	printf("age:%d\n", tmp->age);
	printf("tel:%s\n", tmp->tel);
	printf("sex:%s\n", tmp->sex);
}

int main()
{
	Stu s = {"уехЩ",20,"16666666666","дп"};  
	print1(s);
	print2(&s);
	system("pause");
	return 0;
}