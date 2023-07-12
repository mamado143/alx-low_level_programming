#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string, or NULL if it fails.
 */
char *_strdup(char *str)
{
	int i, length = 0;
	char *copy;

	if (str == NULL)
		return (NULL);
			while (str[length] != '\0')
				length++;
	copy = malloc((length + 1) * sizeof(char));
				if (copy == NULL)
				return (NULL);
				for (i = 0; i <= length; i++)
				copy[i] = str[i];
				return (copy);
}
