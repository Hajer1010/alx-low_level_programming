#include "lists.h"
/**
 * print_listint - function
 * @h: ptr
 * Return: length og list
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
