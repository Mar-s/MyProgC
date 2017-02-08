#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<iostream> 

int main() {

    int height, num;
	float rez;

	printf("Select the unit of measurement: \n");

	printf("1. Foot \n");
	printf("2. Inch \n");
	scanf("%d", &num);

	switch (num) {
	case 1:
		printf("\nEnter your height in feet: ");
		scanf("%d", &height);
		rez = height * 12 * 2.54;
		printf("\nYour height in centimeters = %.2f \n", rez);
		break;

	case 2:
		printf("Enter your height in inches: ");
		scanf("%d", &height);
		rez = height * 2.54;
		printf("\nYour height in centimeters = %.2f \n", rez);
		break;

	default:
		printf("\nError! ");
		break;
	}
	system("pause");
	return 0;
}
