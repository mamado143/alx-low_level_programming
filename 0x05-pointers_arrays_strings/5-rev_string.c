#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *rev_string - reverse the string
 *@s: is a pointer variable.
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
