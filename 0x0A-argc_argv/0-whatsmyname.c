#include <stdio.h>

/**
 * main - it will print a name, followed by a new line.
 * @argc: is the numbers  of command line arguments.
 * @argv: the array that contains the command line arguments.
 * Return: 0 - (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
