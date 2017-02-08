#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<iostream> 

int main() {

	int num;
	char symbol = '*', prob = ' ';

	printf("Enter the number of rows: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		int nach = num - i ;
		int zv = 2 * i - 1;
		for (int j = 1; j <= nach; j++)
			printf("%c", prob);
		int k = 1;
		do {
			printf("%c", symbol);
			k++;
		} while (k <= zv);
		printf("\n");
	}

	system("pause");
	return 0;
}
