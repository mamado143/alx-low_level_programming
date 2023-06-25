#include "main.h"

/**
  *_isupper - is a function which turn characters to upperCase.
  *@c: calculates the character A and a.
  *Return: return 1 or 0
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
