#include "lists.h"
/**
 * *get_dnodeint_at_index - function
 * @head: ptr
 * @index: index
 * Return: ptr
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head)
	{
		if (x == index)
			return (head);
		head = head->next;
		x++;
	}
	return (NULL);
}
