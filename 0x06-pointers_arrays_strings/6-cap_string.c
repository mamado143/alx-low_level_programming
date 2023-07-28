#include <stdio.h>

/**
  * isLower - Check if character is lower.
  * @c: characters.
  * Return: return 1 || 0;
  */
int isLower(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
  * isDelimiter - checks if a character is delimiter.
  * @c: is a character.
  * Return: returns 1 || 0.
  */

int isDelimiter(char c)
{
	int i = 0;
	char delimiter[] = "\t\n,.!?\"(){}";

	for (i = 0; delimiter[i] != '\0'; i++)
	{
		if (c == delimiter[i])
			return (1);
	}
	return (0);
}

/**
  * cap_string - capitalaize all words of string.
  * @s: input string.
  * Return: returns 0 || 1.
  */
char *cap_string(char *s)
{
	char *ptr = s;
	int foundCapDelimiter = 1;

	while (*s != '\0')
	{
		if (isDelimiter(*s))
			foundCapDelimiter = 1;
		else if (isLower(*s) && foundCapDelimiter)
		{
			*s = *s - 'a' + 'A';
			foundCapDelimiter = 0;
		}
		else
			foundCapDelimiter = 0;
		s++;
	}
	return (ptr);
}
