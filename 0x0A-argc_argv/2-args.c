#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: the number of command line arguments.
 * @argv: the array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
