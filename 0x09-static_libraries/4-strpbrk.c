#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The characters to search for.
 *
 * Return: Pointer to the byte in `s` that matches `accept`.
 */
char *_strpbrk(char *s, char *accept)
{
        return (strpbrk(s, accept));
}
