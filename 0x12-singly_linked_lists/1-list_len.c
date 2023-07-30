#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		if (!h->len)
			printf("[0] (nil)");
		else
		h = h->next;
		node_count++;
	}
	return (node_count++);
}

