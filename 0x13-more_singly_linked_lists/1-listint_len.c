#include "lists.h"
/**
 * listint_len - function
 * @h: ptr
 * Return: length
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}

