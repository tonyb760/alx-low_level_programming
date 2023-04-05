#include "main.h"

/**
  * _pow_recursoin.c Will return the value of x raised to the power of y
  * @x: a the value to multiply
  * @y: is the times to multiply the value
  *
  * Return: result of value multiplied y times
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
