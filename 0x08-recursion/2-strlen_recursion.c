#include "main.h"
#include "string.h"
/**
  * _strlen_recursion - Is a function which returns the length of a string.
  * @s: is a pointer to string character.
  * Return: the length of the string.
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
