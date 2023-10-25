#include "lists.h"
/**
 * *_r - function
 * @list: old list
 * @size: size
 * @new: new list
 * Return: ptr
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **new_list;
	size_t i;

	new_list = malloc(size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		new_list[i] = list[i];
	new_list[i] = new;
	free(list);
	return (new_list);
}
/**
 * print_listint_safe - function
 * @head: ptr
 * Return: ptr
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t **list = NULL;
	size_t c = 0, i;

	while (head != NULL)
	{
		for (i = 0; i < c; i++)
		{
			if (head == list[i] )
			{
				printf("->[%p] %d\n", (void *)head, head->n);
				free(list);
				return (c);
			}
		}
		c++;
		list = _r(list, c, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (c);
}
