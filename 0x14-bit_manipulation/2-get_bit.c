#include "main.h"

/**
 * get_bit - retrieves the value of a bit at a
 * specific index in a decimal number
 * @number: number to search
 * @index: index of the bit
 *
 * Return: the value of the bit at the given index
 */
int get_bit(unsigned long int number, unsigned int index)
{
int bit_value;

if (index > 63)
return (-1);


bit_value = (number >> index) & 1;

return (bit_value);
}

