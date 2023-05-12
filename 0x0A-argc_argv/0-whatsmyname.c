#include <stdio.h>
#include "main.h"

/**
 * main - prints program name
 * @argc: this shows the number of arguments
 * @argv: are the array of arguments
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

