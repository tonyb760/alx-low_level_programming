#include <stdio.h>

/**
 * main - this will  print the number of arguments passed into it.
 * @argc: command line arguments.
 * @argv: it contains the program command line arguments.
 * Return: 0 - (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
