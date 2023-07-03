#include "main.h"
/**
  *_strspn - function is writes that gets the length of a prefix.
  *@s: is a string pointer.
  *@accept: is a string pointer.
  *Return: returns loops.
  *@s: is a string pointer.
  *@accept: is a string pointer.
  *Return: returns loops i.
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}

