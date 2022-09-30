#include <stdio.h>



/**
 * main - prints all arguments it receives
 * arguments each followed by a new line.
 * @argc: command line argument count
 * @argv: argument vector
 * Return: 0 always success
 */

int main(int argc, char *argv[])

{

	int i;



	for (i = 0; i < argc; ++i)

		printf("%s\n", argv[i]);

	return (0);

}
