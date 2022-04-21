#define _CRT_SECURE_NO_WARNINGS 1


int factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	if (n > 1)
	{
		return n * factorial(n - 1);
	}
}