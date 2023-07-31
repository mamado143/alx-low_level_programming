#include "main.h"
/**
  * malloc_checked - this function is to allocate memory .
  * @b: is integer to save the functi.
  *
  *Return: returns pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
