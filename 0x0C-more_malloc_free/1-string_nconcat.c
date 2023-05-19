#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Write a function that concatenates two strings.
 * @s1:the first byte string
 * @s2: the second byte string
 * @n: is greater or equal to the length of s2 then use the entire string s2
 * Return: The returned pointer to newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

	{
	char *concat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';

	return (concat);
}
