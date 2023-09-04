#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - is a program to create an array.
 * @size: is a unsigned int.
 * @c: is a char
 *Return: the result of creation of array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);
	if (size == 0 && size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

