#include <unistd.h>

/**
* This is my _putchac.c file!
*/

int _putchar(char c)
{
    return write(STDOUT_FILENO, &c, 1);
}

