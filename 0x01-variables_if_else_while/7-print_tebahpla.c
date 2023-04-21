 #include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * discription: 'prints the lowercase alphabet in reverse'
 * Return: 0
 */

int main(void)
{
int n = 122;

while (n >= 97)
{
putchar(n);
n--;
}
putchar('\n');

return (0);

}
