#include "function_pointers.h"
/**
 *  int_index -function that  searches for an integer
 *  @array: of an element
 *  @size: size 
 *  @cmp: pointer to the function
 *  Return: If no element matches, return -1
 *  If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int loc, flag = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (loc = 0; loc < size; loc++)
	{
		flag = cmp(array[loc]);
		if (flag != 0)
			return (loc);
	}
	return (-1);
}
