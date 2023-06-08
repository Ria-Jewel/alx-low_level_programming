#include "main.h"

/**
 * clear_bit - sets the value of a specific bit to 0
 * @number: pointer to the number to modify
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *number, unsigned int index)
{
if (index > 63)
return (-1);

*number = (~(1UL << index) & *number);
return (1);
}

