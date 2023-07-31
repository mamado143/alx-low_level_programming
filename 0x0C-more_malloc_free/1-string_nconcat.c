#include "main.h"
/**
  * string_nconcat  - is a function to concatnate two strings.
  * @s1: is a pointer to string to concatnate.
  * @s2: is a pointer to string to concatnate from.
  * @n: is unsigned integer.
  *
  * Return: It returns the results of the concatinations.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1 = 0;
	size_t len2 = 0;
	size_t copy_len;
	char *result = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	copy_len = (n >= len2) ? len2 : n;
	result = (char *)malloc((len1 + copy_len + 1) * sizeof(char));
	strcpy(result, s1);
	strncat(result, s2, copy_len);
	result[len1 + copy_len] = '\0';
	return (result);
}
