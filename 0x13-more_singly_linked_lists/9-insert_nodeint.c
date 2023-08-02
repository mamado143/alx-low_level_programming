#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node with a given data value
 *                           at a specified index in a linked list.
 * @head: Pointer to the first element of the linked list.
 * @idx: Index at which the new node should be inserted.
 * @n: Data value to be stored in the new node.
 *
 * Return: Pointer to the newly inserted node, or NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *current = *head;
	listint_t *new_node;

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (count < idx - 1)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = current->next;
		current->next = new_node->next;
	}
	return (new_node);
}

