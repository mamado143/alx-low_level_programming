#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints n elements of an array of integers.
 * @a: The input array of integers.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	printf("%d", a[0]);
	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	printf("\n");
}
