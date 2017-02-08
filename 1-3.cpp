#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<iostream> 

#define Pi 3.14

int main() {

	char symbol;
	float angle, rad, deg;

	do{
		printf("Enter the angle in format [45.00R/45.00D], R - radians, D - degrees : ");
		scanf("%f%c", &angle, &symbol);
		while (getchar() != '\n');
	} while ((symbol != 'R') && (symbol != 'D'));

	if (symbol == 'R')
	{
		deg = angle * 180 / Pi;
		printf("%.2fR = %.2fD \n", angle, deg);
	}

	else
	{
		rad = angle * Pi / 180;
		printf("%.2fD = %.2fR \n", angle, rad);
	}

	system("pause");
	return 0;
}
