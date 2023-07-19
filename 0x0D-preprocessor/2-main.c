#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This function prints the name of the file it was compile from.
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
