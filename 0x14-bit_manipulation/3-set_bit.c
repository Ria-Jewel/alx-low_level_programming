#include "main.h"

/**
 * set_bit - sets the value of a bit at a specified index to 1
 * @number: pointer to the number to modify
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *number, unsigned int index)
{
if (index > 63)
return (-1);

*number = ((1UL << index) | *number);
return (1);
}

