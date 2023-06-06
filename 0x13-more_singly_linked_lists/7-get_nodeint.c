#include "lists.h"


/**
 * get_nodeint_at_index - eturns the nth node of a listint_t linked list.
 * @head: first node
 * @index: index of the node
 * Return: pointer of the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;
while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}
