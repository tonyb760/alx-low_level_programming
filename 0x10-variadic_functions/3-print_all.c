#include <stdarg.h>
#include <stdio.h>

/**
* print_c - Prints a char
* @args: va_list containing the char to print
* @separator: Separator string to print before the char
*
* Return: void
*/
void print_c(va_list args, char *separator)
{
char c = va_arg(args, int);
printf("%s%c", separator, c);
}

/**
* print_i - Prints an integer
* @args: va_list containing the integer to print
* @separator: Separator string to print before the integer
*
* Return: void
*/
void print_i(va_list args, char *separator)
{
int i = va_arg(args, int);
printf("%s%d", separator, i);
}

/**
* print_f - Prints a float
* @args: va_list containing the float to print
* @separator: Separator string to print before the float
*
* Return: void
*/
void print_f(va_list args, char *separator)
{
float f = va_arg(args, double);
printf("%s%f", separator, f);
}

/**
* print_s - Prints a string
* @args: va_list containing the string to print
* @separator: Separator string to print before the string
*
* Return: void
*/
void print_s(va_list args, char *separator)
{
char *s = va_arg(args, char *);
if (!s)
s = "(nil)";
printf("%s%s", separator, s);
}

/**
* print_all - Prints anything
* @format: List of types of arguments passed to the function
*           c: char
*           i: integer
*           f: float
*           s: char * (if the string is NULL, print (nil) instead
*           any other char should be ignored
*
* Return: void
*/
void print_all(const char * const format, ...)
{
va_list args;
char *separator;
unsigned int i, j;

j = 0;
separator = "";
va_start(args, format);
while (format && format[j])
{
i = 0;
switch (format[j])
{
case 'c':
print_c(args, separator);
break;
case 'i':
print_i(args, separator);
break;
case 'f':
print_f(args, separator);
break;
case 's':
print_s(args, separator);
break;
default:
i = 1;
break;
}
if (format[j + 1] && !i)
separator = ", ";
j++;
}
va_end(args);
printf("\n");
}
