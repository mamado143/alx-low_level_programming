#include "lists.h"
/**
 * pop_listint - Removes the head node of a linked list.
 * @head: is the head of linked list.
 * Return: return in The data or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int current;

	while (head)
	{
		current = (*head)->n;
	}
	*head = (*head)->next;
	free(temp);
	return (current);
}
