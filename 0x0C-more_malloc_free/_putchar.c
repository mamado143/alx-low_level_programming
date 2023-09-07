#include <unistd.h>

/**
 * _putchar - Write a character to stdout.
 * @c: The character to print.
 *
 * Return: 1 on success, -1 on error (with errno set appropriately).
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
