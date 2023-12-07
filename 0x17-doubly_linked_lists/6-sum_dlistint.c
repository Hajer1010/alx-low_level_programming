#include "lists.h"
/**
 * sum_dlistint - function
 * @head: ptr
 * Return: integer
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
