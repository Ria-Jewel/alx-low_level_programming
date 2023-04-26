#include "main.h"
#include <unistd.h>
/**
 * _putchar - write c to stdout
 * @c - to print
 *
 * Return: 0;
 * -1 is returned on error and set appropriately.
 */

int _putchar(char c)
{

return (write(1,&c,1));
}
