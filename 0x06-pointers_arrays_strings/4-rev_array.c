#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers.
 * @a:  Pointer to the array of integers.
 * @n: Size of the array.
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n  - 1;

	while (start < end)
	{
		int swap;

		swap = a[start];
		a[start] = a[end];
		a[end] = swap;
		start++;
		end--;
	}
}
