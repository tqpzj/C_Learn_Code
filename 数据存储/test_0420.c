#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	//ָ�����͵����壺
//1��ָ�����;�����ָ������ò������ܷ��ʼ����ֽڣ�char*p��*p������1���ֽڣ�int*p��*p����4���ֽ�
//2.ָ�����;�����ָ��+1��-1���ӵĻ��߼����Ǽ����ֽڣ�char'p��p+1������һ���ַ���int'p��p+1������һ������-4���ֽ�
	if (*p == 1)
	{
		return 1;//1:С��
	}
	else
	{
		return 0;//0:���
	}
}

int main0()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��");
	}
	else
	{
		printf("���");
	}
	return 0;
}

int main1()
{
	char a =-1;
	signed char b = -1;
	unsigned char c = -1;
	printf("a=%d,b=%d,c=%d",a,b,c);

	return 0; 
}

int main2()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	return 0;
}

int main()
{
	float a = 5.5;
	return 0;
}