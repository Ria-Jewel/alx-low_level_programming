#include <unistd.h>

/**
 * _putchar - writes  c to stdout
 * @c: to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
