#include "main.h"

/**
 * binary_to_uint - converts a binary number
 * represented as a string to an unsigned integer
 * @binary: string containing the binary number
 *
 * Return: the converted unsigned integer
 */
unsigned int binary_to_uint(const char *binary)
{
	int i;
	unsigned int decimal_value = 0;

	if (!binary)
		return (0);

	for (i = 0; binary[i]; i++)
	{
		if (binary[i] < '0' || binary[i] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (binary[i] - '0');
	}

	return (decimal_value);
}

