#include "main.h"
#include <string.h>
/**
  *_strspn - function is writes that gets the length of a prefix.
  *@s: is a string pointer.
  *@accept: is a string pointer.
  *Return: returns loops.
  *@s: is a string pointer.
  *@accept: is a string pointer.
  *Return: returns function.
  */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

