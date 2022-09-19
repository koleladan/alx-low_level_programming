#include "main.h"

/**
 * main - swaps the values of two integers
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
