#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a specified index
 *                           in a linked list.
 * @head: Pointer to the first element of the linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if the deletion is successful, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node, *current_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
		return (1);
	}
	prev_node = *head;
	while (i < index - 1)
	{
		if (!prev_node || !(prev_node->next))
			return (-1);
		prev_node = prev_node->next;
		i++;
	}
	current_node = prev_node->next;
	prev_node->next = current_node->next;
	free(current_node);
	return (1);
}

