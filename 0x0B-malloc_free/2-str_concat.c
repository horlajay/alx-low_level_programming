#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two strings and returns a new string.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: On success, returns a pointer to the concatenated string.
 *         Returns NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int s1_len;
	int s2_len;

	s1_len = (s1 != NULL) ? strlen(s1) : 0;
	s2_len = (s2 != NULL) ? strlen(s2) : 0;
	concatenated = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (concatenated == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		strcpy(concatenated, s1);
	}
	if (s2 != NULL)
	{
		strcat(concatenated, s2);
	}
	return (concatenated);
}
