#include "lists.h"
/**
 * list_len - function
 * @h: ptr
 * Return: length
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}

