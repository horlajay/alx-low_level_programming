#include <lists.h>
/**
 * print_dlistint - function to print elements of the DLL
 * @dlistint_t: list
 * @h: elements in  the list
 * Retuurn: number of nodes
 */

size_t print_dlistint(const struct dlistint_t *h)
{
	const struct dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d <-> ", current->n);
		current = current->next;
		count++;
	}

	printf("NULL\n");
	return (count);
}
