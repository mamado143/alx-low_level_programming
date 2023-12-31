#include "lists.h"
#include  <stdio.h>

/**
 * print_list - This function is printing all the elements of lists.
 * @h: is a pointer to the head of linkedlist
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;
		while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
