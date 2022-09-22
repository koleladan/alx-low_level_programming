#include "main.h"

#include <string.h>



/**
 * _strncat - concatenates two strings until size limit
 * @dest: first string
 * @src: stringbto be concatenated
 * @n: operand number
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)

{

	strncat(dest, src, n);

	return (dest);

}
