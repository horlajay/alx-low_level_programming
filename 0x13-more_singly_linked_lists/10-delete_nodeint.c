#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes node at index of listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted (starts at 0).
 *
 * Return: 1 if successful, -1 if index is out of bounds or list is empty.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL || index == 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	listint_t *current = *head;
	listint_t *previous = NULL;

	for (unsigned int i = 0; i < index; i++)
	{
		previous = current;
		current = current->next;

		if (current == NULL)
		{
			return (-1);
		}
	}
	previous->next = current->next;
	free(current);
	return (1);
}
