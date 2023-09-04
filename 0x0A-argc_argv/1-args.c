#include <stdio.h>
/**
  * main - Printing arguments
  * @argc: argument with type int
  * @argv: an array of arguments.
  * Return: returns 0 or 1.
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
