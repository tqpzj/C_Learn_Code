#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int wwis_prime(int x)
{
	int i = 0;
	for (i = 2; i <= x; i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	if (i == x )
		return 1;
}