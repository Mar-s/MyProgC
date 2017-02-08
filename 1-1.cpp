#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>

using namespace std;

int main() {

	char sex;
	float height, weight, imt; // imt - body mass index

	/*to enter a verification*/
	do {
		printf("What's your gender?[w/m]: ");
		scanf("%c", &sex);
		while (getchar() != '\n'); // cleaning input
	} while ((sex != 'm') && (sex != 'w'));

	printf("Your height in meters? ");
	scanf("%f", &height);
	printf("Your weight? ");
	scanf("%f", &weight);

	imt = weight / (height * height);

	if (sex == 'w')
	{
		if (imt < 16)
		{
			printf("You have underweight! You need to gain weight!\n");
		}
		if ((imt >= 16) && (imt < 19))
		{
			printf("You have insufficient body weight! You need to take care of yourself!\n");
		}
		if ((imt >= 19) && (imt < 24))
		{
			printf("You have normal body weight! Keep it up!\n");
		}
		if ((imt >= 24) && (imt < 31))
		{
			printf("You have overweight! You must take care of yourself!\n");
		}
		if (imt >= 31)
		{
			printf("You have obesity! You need to lose weight!\n");
		}
	}

	if (sex == 'm')
	{
		if (imt < 19)
		{
			printf("You have underweight! You need to gain weight!\n");
		}
		if ((imt >= 19) && (imt < 24))
		{
			printf("You have insufficient body weight! You need to take care of yourself!\n");
		}
		if ((imt >= 24) && (imt < 27))
		{
			printf("You have normal body weight! Keep it up!\n");
		}
		if ((imt >= 27) && (imt < 33))
		{
			printf("You have overweight! You must take care of yourself!\n");
		}
		if (imt >= 33)
		{
			printf("You have obesity! You need to lose weight!\n");
		}
	}

	system("pause");
	return 0;
}
