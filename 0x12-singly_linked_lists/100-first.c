#include <stdio.h>

void print_before_main(void) __attribute__ ((constructor));

/**
 * print_before_main - prints a message
 * before the main function is executed
 */
void print_before_main(void)
{
printf("You're tired! But still, you must admit,\n");
printf("I carry my home on my back!\n");
}
