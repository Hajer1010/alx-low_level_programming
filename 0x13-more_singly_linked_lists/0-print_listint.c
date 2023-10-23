#include "lists.h"
/**
 * print_list - function
 * @h: ptr
 * Return: length og list
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		c++;
	}
	return (c);
}
