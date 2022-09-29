#include "main.h"



/**
 * _puts_recursion - function to print a string and add a newline
 * @s: string to be printe
 * Return:void
 */

void _puts_recursion(char *s)

{

	if (*s == '\0')

	{
		_putchar(*(s + 0));
		_puts_recursion((s + 1));
	}
	else
	{
		_putchar('\n');
		return;
	}
}
