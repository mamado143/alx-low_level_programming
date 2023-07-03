#include "main.h"
/**
  * _strchr - Locates the first occurance of a char in string.
  * @s: string to search.
  * @c: is a character to locate.
  * Return: return pointer or NULL.
  */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
