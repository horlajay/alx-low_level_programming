#include "main.h"

/**
 * binary_to_uint - converts binary to integer
 * @b: string
 * Return: Converted number
 *         0 if there is one or more chars in the string
 *         or b is null
 */

unsigned int binary_to_uint(const char *b)
{
	int t;
	unsigned int n = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (t = 0; b[t] != '\0'; t++)
	{
		if (b[t] != '0' && b[t] != '1')
		{
			return (0);
		}
	}
	for (t = 0; b[t] != '\0'; t++)
	{
		n <<= 1;
		if (b[t] == '1')
			n += 1;
	}
	return (n);
}
