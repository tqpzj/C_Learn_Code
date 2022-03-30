#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main0() {
	int dogs;
	printf("how many dogs do you have?\n");
	scanf_s("%d", &dogs);
	printf("you have %d dogs!", dogs);
	return 0;
}
