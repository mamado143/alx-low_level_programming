#include "main.h"
#include <string.h>
/**
  *_strstr - is  function that locates a substring.
  * @haystack: is a string pointer.
  * @needle: substring pointer.
  * Return: returns pointer to the begining of substring.
  */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
