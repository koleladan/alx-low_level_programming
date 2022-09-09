#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * assigns a random number to var n
 * prints whether it is negative, positive or zero
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	
	strand(time(0));
	n-rand() - RAND_MAX / 2;

	if (n > 0){
		printf("%d is a positive\n", n);
	}
	else if (n < 0){
	       printf("%d is a negative\n", n);
	}
	else{
	printf("%d is zero\n", n);
	}
	return (0);
}
