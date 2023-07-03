#include "main.h"
#include <stdio.h>
/**
  * _strchr - Locates the first occurance of a char in string.
  * @s: string to search.
  * @c: is a character to locate.
  * Return: return pointer or NULL.
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
