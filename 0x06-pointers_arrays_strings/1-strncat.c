#include <stdio.h>

/*
 * _strncat - Concatenates n characters from src to dest
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of characters to concatenate
 *
 * Return: Pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int charCount = 0;

	while (*dest)
	{
		dest++;
	}
	while (*src && charCount < n)
	{
		putchar(*dest++ = *src++);
		charCount++;
	}
	if (charCount >= n)
	{
		putchar('\0');
	}
	*dest = '\0';
	return (dest);
}

