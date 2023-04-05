#include "main.h"

/**
  * factorial - This is a function to return the factorial of a given number
  * @n: is the number to calculate the factorial
  *
  * Return: INT Value
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
