#include "lists.h"
/**
 *
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **new_list;
	size_t c;
/**
 * print_listint_safe - function
 * @head: ptr
 * Return: ptr
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *p = head;
	size_t c = 0;

	if(head == NULL)
		exit (98);

	while (p != NULL)
	{
		printf("[%p] %d\n", (void *)p, p->n);
		c++;
		if (p->next <= p )
		{
			printf("->[%p] %d\n", (void *)p->next, p->next->n);
			break;
		}
		p = p->next;
	}
	return (c);
}
