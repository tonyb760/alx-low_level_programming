#include "main.h"

/**
 * _strlen_recursion - return 1 if a string is a palindrome and 0 if not.
 * @s: the string
 * Return: display the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - use to compares each character of the string.
 * @s: the string
 * @n1: the smallest iterator.
 * @n2: the biggest iterator.
 * Return: value.
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: the string.
 * Return: return 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
