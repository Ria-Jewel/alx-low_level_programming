#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to the standard output (stdout)
 * @character: The character to be printed
 *
 * Return: On success, it returns 1.
 * On error, -1 is returned, and errno is set accordingly.
 */
int _putchar(char character)
{
return (write(1, &character, 1));
}

