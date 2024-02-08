#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: unsigned long integer
 * @index: index of the bit
 * Return: 1 if it worked, -1 if an error occurrs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	*n &= bitmask;
	return (1);
}
