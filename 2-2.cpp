#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<iostream> 
#include<stdlib.h>
#include<time.h>

int main() {

	int secret_num, guess;

	srand(time(NULL));
	secret_num = rand() % 100;

	do{
		printf("\nEnter the number: ");
		scanf("%d", &guess);

		if (guess > secret_num)
			printf("\nSecret number less!");

		else
		if (guess < secret_num)
			printf("\nSecret number more!");

		else
		{
			printf("-------------------\n");
			printf("You guessed number! Keep it up!\n");
		}
	} while (guess != secret_num);

	system("pause");
	return 0;
}
