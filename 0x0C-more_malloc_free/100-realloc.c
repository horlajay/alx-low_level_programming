#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory block previously allocated with malloc.
 * @old_size: The old size of the allocated memory block.
 * @new_size: The new size of the memory block.
 *
 * Return: A pointer to the newly allocated memory block.
 * If new_size == old_size, return ptr.
 * If new_size is zero, free the memory block and return NULL.
 * If ptr is NULL, equivalent to malloc(new_size).
 * If malloc fails, return NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		memcpy(new_ptr, ptr, old_size);
	}
	else
	{
		memcpy(new_ptr, ptr, new_size);
	}
	free(ptr);
	return (new_ptr);
}
