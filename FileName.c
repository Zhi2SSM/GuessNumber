#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	srand(time(0));
	int num = rand() % 100 + 1;
	int count = 1;
	int number = 0;
	printf("Guess a number between 1 and 100:\n");
	scanf("%d", &number);
	while (number != num){
		printf("False ,try again\n");
		count++;
		{
			if (number > num)
			{
				printf("Too high!\n");
			}
			else {
				printf("Too low!\n");
			}
		}
		scanf("%d", &number);
	   } 
	printf("Wow! you are right!");
	printf("You guessed it in %d attempts!", count);
	return 0;
}