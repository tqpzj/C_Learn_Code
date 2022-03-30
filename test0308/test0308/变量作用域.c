#include <stdio.h>

int main() {
	extern int ages;
	printf("我调用了外部变量%d", ages);
	return 0;
}