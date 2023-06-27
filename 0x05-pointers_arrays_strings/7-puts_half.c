#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The input string.
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start = (length + 1) / 2;
	int i;

	for (i = start; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
