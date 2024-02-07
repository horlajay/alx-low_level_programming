#include "lists.h"
/**
 * listint_len - length of linked list
 * @h: struct to go through
 * Return: amount of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t node =  0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
