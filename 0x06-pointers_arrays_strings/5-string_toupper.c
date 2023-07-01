#include <stdio.h>

/**
 * string_toupper - Convert lowercase letters to uppercase in a string
 * @str: The input string
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'b')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
