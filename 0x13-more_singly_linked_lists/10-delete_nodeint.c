#include "lists.h"
/**
 * delete_nodeint_at_index - function
 * @head: ptr
 * @index: index
 * Return: 1, -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *pre_node;
	unsigned int c = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (c == index)
		{
			pre_node->next = node->next;
			free(node);
			return (1);
		}
		c++;
		pre_node = node;
		node = node->next;
	}
	return (-1);
}
