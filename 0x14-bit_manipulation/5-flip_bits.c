#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip
 *                to get from one number to another.
 * @n: first unsigned long integer
 * @m: second unsigned long integer
 * Return: num of bits to be flipped to get n from m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int list = 0;

	while (xor_result)
	{
		list += xor_result & 1;
		xor_result >>= 1;
	}
	return (list);
}
