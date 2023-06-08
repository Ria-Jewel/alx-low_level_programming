#include "main.h"

/**
 * print_binary - prints the binary representation of a decimal number
 * @number: number to print in binary
 */
void print_binary(unsigned long int number)
{
int i, count = 0;
unsigned long int current;

for (i = 63; i >= 0; i--)
{
current = number >> i;
if (current & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}

