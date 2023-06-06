#include "lists.h"

/**
 * listint_len - returns the number of the elements of a listint_t list.
 * @h: linked list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
