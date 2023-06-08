#include "main.h"

/**
 * get_endianness - checks the endianness of the machine
 *
 * Return: 0 if the machine is big endian, 1 if it is little endian
 */
int get_endianness(void)
{
unsigned int value = 1;
char *byte = (char *)&value;

return (*byte);
}

