#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer to array
 * @size: the number of elements in the array
 * @cmp: pointer to the function to compare values
 * Return: index of the first element for which cmp does'nt return 0, or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
		return (-1);
}
