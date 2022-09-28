#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - function to print a string and add a newline
 * main - prints a string, followed by a new line
 * puts - function that output strings
 * @s: the string to be printed
 * Return:void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
