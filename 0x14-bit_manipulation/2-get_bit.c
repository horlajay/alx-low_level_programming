#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: unsigned long integer
 * @index: the index starting from 0, of the bit to get
 * Return: value of bit a specified index
 *           -1 if an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitmask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n & bitmask) ? 1 : 0);
}
