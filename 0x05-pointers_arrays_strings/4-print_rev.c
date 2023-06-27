#include "main.h"
#include <string.h>
/**
  *print_rev - This function it reversing txt.
  *@s: is a pointer integer.
  *Return: return void.
  */
void print_rev(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
