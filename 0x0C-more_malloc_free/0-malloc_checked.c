#include "main.h"
#include <stdlib.h>

/**
*malloc_checked -  allocates memory
*@b: number of bytes allocated
*
*Return:a pointer to the allocated.
*/

void *malloc_checked(unsigned int b)
{

void *w = malloc(b);
if (w == NULL)
exit(98);

return (w);
}

