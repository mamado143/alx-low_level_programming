#include "main.h"

/**
  * _strcat - This function is concatenates two strings.
  * @dest: Is a pointer to destination string.
  * @src: Is a pointer to destination string.
  * Return: returns dest.
  */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr)
		ptr++;
	while ((*ptr++ = *src++))
		;
	return (dest);
}
