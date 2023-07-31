#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value of the range.
 * @max: The maximum value of the range.
 *
 * Return: A pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *arr;
	int number_elements, i;

	if (min > max)
	{
		return (NULL);
	}
	number_elements = max - min + 1;
	arr = malloc(number_elements * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < number_elements; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
