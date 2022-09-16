#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: is an operand number
 * checks if a character is uppercase
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
