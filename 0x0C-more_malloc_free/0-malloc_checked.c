#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory using malloc.
 * @b: Number of bytes to allocate.
 * Return: Pointer to allocated memory; exit with code 98 on failure.
 */
void *malloc_checked(unsigned int b)
{
    void *mem = malloc(b);

    if (mem == NULL)
        exit(98);

    return (mem);
}
