#include "main.h"
/**
  *_isupper - is a function which turn characters to upperCase.
  *@c: calculates the character A and a.
  *Return: return 1 or 0
  */
int _isupper(int c)
{
	if (c == 65 && c <= 90)
	{
		return (1);
	}
	else if (c == 97 && c <= 122)
	{
		return (0);
	}
	return (c);
}
