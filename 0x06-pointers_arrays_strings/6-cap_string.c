#include "main.h"
#include <stdio.h>

/**
  * isLower - Check if character is lower.
  * @c: characters.
  * Return: return 1 || 0;
  */
int isLower(char c)
{
	return (c >= 97 && c <= 122);
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

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
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
	int foundcapDelemiter = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundcapDelemiter = 1;
		else if (isLower(*s) && foundcapDelemiter)
		{
			*s -= 32;
			foundcapDelemiter = 0;
		}
		else
			foundcapDelemiter = 0;
		s++;
	}
	return (ptr);
}

