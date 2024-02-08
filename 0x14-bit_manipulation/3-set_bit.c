#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: pointer to unsigned long int
 * @index: index, starting from 0, of the bit set to 1
 * Return: 1 if bit was a success or -1 if error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	*n |= bitmask;
	return (1);
}
