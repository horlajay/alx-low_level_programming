#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if uppercase
 * @c: character to check
 *
 * Return: gives 1 or 0
 */
int _isupper(int c)
{

	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
