#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Deletes the node at a specified index
 *                           in a linked list.
 * @head: Pointer to the first element of the linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if the deletion is successful, 0 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = *head;
	listint_t *temp;

	while (current != NULL && count < index)
	{
		temp = current;
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		return (0);
	}
	if (index == 0)
	{
		*head = current->next;
	}
	else
	{
		temp->next = current->next;
	}
	free(current);
	return (1);
}
