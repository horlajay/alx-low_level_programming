#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * @head: A pointer to the head of the linked list
 * @index: The index of the node to retrieve, starting from 0
 *
 * Return: A pointer to the nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int position = 0;
	listint_t *node = head;

	while (node != NULL)
	{
		if (position == index)
		{
			return (node);
		}
		node = node->next;
		position++;
	}
	return (NULL);
}
