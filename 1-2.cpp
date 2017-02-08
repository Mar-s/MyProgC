#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>

int main() {

	int hour, minute, second;

	/*to enter a verification*/
	do{
		printf("Please enter the current time in the format HH:MM:SS - ");
		scanf("%d:%d:%d", &hour, &minute, &second);
		while (getchar() != '\n'); // cleaning input
	} while ((hour < 0) || (hour >= 24) || (minute < 0) || (minute >= 60) || (second < 0) || (second >= 60));

	if ((hour >= 5) && (hour < 12))
	{
		printf("Good morning!\n");
	}
	else
	if ((hour >= 12) && (hour < 17))
	{
		printf("Good afternoon!\n");
	}
	else
	if ((hour >= 17) && (hour < 22))
	{
		printf("Good evening!\n");
	}
	else
	if ((hour >= 22) && (hour < 5))
	{
		printf("Goodnight!\n");
	}
	system("pause");
	return 0;
}

