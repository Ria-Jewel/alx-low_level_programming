#include "function_pointers.h"
/**
 * array_iterator - execute a function
 *  @array: array of element
 *  @size: size of the array
 *  @action: function
 *  Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		for (; i < size; i++)
			action(array[i]);
	}
}
