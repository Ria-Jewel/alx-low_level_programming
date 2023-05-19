#include "main.h"
#include <stdlib.h>
/**
 *  _calloc - function allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated memory.
 *  @nmemb: element of size
 *  @size:size of each array element
 *  Return: If nmemb or size is 0, then _calloc returns NULL.
 *  If malloc fails, then _calloc returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
