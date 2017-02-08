#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<iostream> 
#include<string.h>

#define N 79
#define COUNT 100

int main() {

	char stroka[COUNT];
	int rez, len;
    
	printf("Enter the string: ");
	scanf("%s", &stroka);

	len = strlen(stroka);
	rez = (N - len) / 2;
	for (int i = 0; i <= rez; i++)
	{
		printf(" "); 
	}
	printf("%s\n", stroka);

	system("pause");
	return 0;
}
