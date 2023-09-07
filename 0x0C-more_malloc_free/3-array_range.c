#include "main.h"
#include <stdlib.h>

/**
 * array_range - Create an array of integers from min to max, inclusive.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: Pointer to the newly created array, or NULL on failure or if min > max.
 */
int *array_range(int min, int max)
{
    int *array, index, size;

    if (min > max)
        return (NULL);

    size = max - min + 1;

    array = malloc(sizeof(int) * size);

    if (array == NULL)
        return (NULL);

    for (index = 0; index < size; index++)
        array[index] = min++;

    return (array);
}
