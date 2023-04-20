#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - prints a list of numbers separated by a string
* @separator: the string to print between numbers
* @n: the number of integers to print
* @...: a variable number of integer arguments
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++) {
printf("%d", va_arg(args, int));
if (separator != NULL && i != n - 1)
printf("%s", separator);
}

va_end(args);

printf("\n");
}
