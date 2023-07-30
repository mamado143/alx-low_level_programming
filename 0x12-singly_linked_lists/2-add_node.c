#include "lists.h"
/**
  * add_node - This function adds new node at the begining of the list.
  * @head: Pointer to the head of the list.
  * @str: a string to be duplicate.
  *
  *Return: returns the new_node.
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node =  malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
