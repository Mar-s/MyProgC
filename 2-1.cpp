#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<iostream> 

#define g 9.81

int main() {

	float height, way;
	int time = 0;

	printf("To what height will drop the bomb in meters? ");
	scanf("%f", &height);

	printf("\nt = %2d c h = %.1f", time, height);

	while (height >= 0) {
		time++;
		way = g * time * time / 2;
		height = height - way;
		if (height >= 0)
			printf("\nt = %2d c h = %.1f", time, height);
	} 

	printf("\nBABAH!!!\n");

	system("pause");
	return 0;
}
