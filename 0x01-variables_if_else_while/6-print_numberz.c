#include <stdio.h>

/**
 * main - print all single digit numbers base from 0 to 10 only using putchar and without char variables
 *
 * REturn: Always 0(success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	petchar('\n');

	return (0);
}
