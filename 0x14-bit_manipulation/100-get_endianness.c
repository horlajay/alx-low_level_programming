#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if small endian
 */

int get_endianness(void)
{
	unsigned int digit = 1;
	unsigned char *bit = (unsigned char *)&digit;

	if (*bit == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
