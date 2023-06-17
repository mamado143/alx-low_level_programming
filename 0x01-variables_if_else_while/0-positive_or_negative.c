#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
  *main - Entry point
  *Return: Always 0 (success)
  */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%dis positive", n);
	}
	if (n < 0)
	{
		printf("%dis negative", n);

	}
	return (0);
}
