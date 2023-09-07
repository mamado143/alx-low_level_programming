#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array of elements of a specified size.
 * @nmemb: Number of elements in the array.
 * @size: Size in bytes of each array element.
 *
 * Return: Pointer to the allocated memory, or NULL on failure or when nmemb/size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *mem;
    char *filler;
    unsigned int index;

    if (nmemb == 0 || size == 0)
        return (NULL);

    mem = malloc(size * nmemb);

    if (mem == NULL)
        return (NULL);

    filler = mem;

    for (index = 0; index < (size * nmemb); index++)
        filler[index] = '\0';

    return (mem);
}
