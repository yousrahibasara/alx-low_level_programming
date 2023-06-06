#include <stdio.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - count the number
 * @head: ...
 * Return: ...
 */

size_t looped_listint_count(listint_t *head)
{
listint_t *tortoise, *hare;
size_t nodes = 1;
if (head == NULL || head->next == NULL)
return (0);
tortoise = head->next;
hare = (head->next)->next;
while (hare)
{
if (tortoise == hare)
{
tortoise = head;
while (tortoise != hare)
{
nodes++;
tortoise = tortoise->next;
hare = hare->next;
}
tortoise = tortoise->next;
while (tortoise != hare)
{
nodes++;
tortoise = tortoise->next;
}
return (nodes);
}
tortoise = tortoise->next;
hare = (hare->next)->next;
}
return (0);
}

/**
 * free_listint_safe - ...
 * @h: ...
 * Return: ...
 * Description: the function sets that was freed
 */

size_t free_listint_safe(listint_t **h);
{
listint_t *temp;
size_t nodes, index = 0;
nodes = looped_listint_len(h);
if (nodes == 0)
{
for (; h != NULL && *h != NULL; nodes++)
{
temp = (*h)->next;
free(*h);
*h = temp;
}
}
else
{
for (index = 0; index < nodes; index++)
{
temp = (*h)->next;
free(*h);
*h = temp;
}
*h = NULL;
}
h = NULL;
return (nodes);
}
