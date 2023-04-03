/**
 * _memset - fills memory with a constant byte
 *
 *  @s: block of memory to fill.
 *
 *  @b: character to fill
 *
 *  @n: bytes to be filled
 *
 *  Return: Should Always be 0
 */
char *_memset(char *s, char b, unsigned int n)
{
		unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
