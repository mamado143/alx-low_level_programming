#include "stdio.h"
/**
  * main - a function to start the app.
  * @argc: an argument to count the number of arguments.
  * @argv: a vector of arguments.
  * Return: return 0.
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
