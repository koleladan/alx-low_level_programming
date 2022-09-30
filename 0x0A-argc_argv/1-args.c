#include <stdio.h>



/**
 * main - prints the number of arguments passed into it
 * print a number, followed by a new line
 * @argc: command line argument count
 * @argv: argument vector
 * Return: 0 always success
 */

int main(int argc, __attribute__((unused))char **argv)

{

	printf("%d\n", argc - 1);

	return (0);

}
