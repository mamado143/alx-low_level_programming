#include "stdio.h"
/**
 * _print_rev_recursion - This function is printing reverse string.
 * @s: is a pointer to character.
 * Return: return a pointer reserved.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
	}
	putchar(*s);
}
