#include <stdlib.h>
#include "lists.h"
/**
  *list_len - this function is returning the number of elements in list.
  * @h: is the head of the linkedlist.
  *
  *Return: The number of elements in the linked list.
  */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}
	return (node_count++);
}

