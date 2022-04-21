#define _CRT_SECURE_NO_WARNINGS 1

int mystringlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int mystringlen1(char* str)
{
	if (*str != '\0')
	{
		return 1 + mystringlen(str + 1);
	}
	else
		return 0;
}