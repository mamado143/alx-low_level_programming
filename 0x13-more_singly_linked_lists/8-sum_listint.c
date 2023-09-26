#include "lists.h"
/**
  * sum_listint - Calculates the sum of all data values in a linked list.
 * @head: Pointer to the first element of the linked list.
 *
 * Return: The sum of the data values, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
