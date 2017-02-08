#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<iostream>
#include<time.h>
#include<stdlib.h>

#define N 8
#define M 10

int main()
{
	char p;

	srand(time(NULL));

	for (int i = 1; i <= M; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			switch (rand() % 3)
			{
			case 0:
				p = '0' + rand() % 10;
				break;
			case 1:
				p = 'A' + rand() % 26;
				break;
			case 2:
				p = 'a' + rand() % 26;
				break;
			}

			printf("%c", p);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
