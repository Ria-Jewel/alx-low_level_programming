  #include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * discription:'alphabet in lowercase, followed by a new line'
 * Return: 0
 */

int main(void)
{
int n = 97;
while (n <= 122)
{
if (n == 101 || n == 113)
{
n++;
continue;
}
putchar(n);
n++;
}

putchar('\n');

return (0);
}

