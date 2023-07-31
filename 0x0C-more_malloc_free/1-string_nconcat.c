#include "main.h"
/**
  * string_nconcat  - is a function to concatnate two strings.
  * @s1: is a pointer to string to appent to
  * @s2: is a pointer to string to concatnate from.
  * @n: is unsigned integer of number of byts from s2 to s1.
  *
  * Return: It returns the results pointer of the concatinations.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result = NULL;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);
	if (n < len2)
		result = malloc(sizeof(char) * (len1 + n + 1));
	else
		result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!result)
		return (NULL);
	for (; i < len1; i++)
		result[i] = s1[i];
	for (; n < len2 && i < (len1 + n); i++, j++)
		result[i] = s2[j];
	for (; n >= len2 && i < (len1 + len2); i++, j++)
		result[i] = s2[j];
	result[i] = '\0';
	return (result);
}
