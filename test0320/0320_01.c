#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main0() {
	int input = 0;
	printf("你要好好学习吗？(1/0)>:");
	scanf("%d", &input);
	if (input == 1)
		printf("优秀\n");
	else
		printf("不优秀\n");
	return 0;
}