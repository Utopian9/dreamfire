#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<string.h>

int main()
{
	int line = 0;
	while (line < 20000)
		
	{
		printf("�ú�ѧϰ����������:%d\n",line);
		line++;
	}
	if (line >= 20000)
		printf("�Ƹ�����\n");

	return 0;
}