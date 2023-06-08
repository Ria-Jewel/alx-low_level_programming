#include "main.h"

/**
 * flip_bits - counts the number of bits that need to be flipped
 *             to convert one number to another
 * @number1: first number
 * @number2: second number
 *
 * Return: the number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int number1, unsigned long int number2)
{
int i, count = 0;
unsigned long int current;
unsigned long int exclusive = number1 ^ number2;

for (i = 63; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
count++;
}

return (count);
}

