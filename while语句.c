#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<string.h>

int main()
{
	int line = 0;
	while (line < 20000)
		
	{
		printf("好好学习，天天向上:%d\n",line);
		line++;
	}
	if (line >= 20000)
		printf("财富自由\n");

	return 0;
}