#include "main.h"
#include <stdlib.h>

/**
 * malloc- allocates memory
 * @b number of bytes allocated
 * Returns a pointer to the allocated memory
 * returns 0
 */

void *malloc_checked(unsigned int b)
{
	void *w = malloc(b);
	if (w == NULL)
		exit(98);
	return (w);
}

