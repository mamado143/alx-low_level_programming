#include <stdio.h>
/**
 * main - Entry of main.
 * @argc: arguments of type int.
 * @argv: vector of chars.
 * Return: return 0 or 1.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
