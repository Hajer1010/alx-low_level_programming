#include "lists.h"
/**
 * *reverse_listint - function
 * @head: ptr
 * Return: ptr
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next = 0;

	if (!head || !*head)
		return (NULL);
	node = *head;
	*head = NULL;
	while (node)
	{
		next = node->next;
		node->next = *head;
		*head = node;
		node = next;
	}
	return (*head);
}
