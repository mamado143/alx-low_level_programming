#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
  *main - Entry point
  *Description - printf greater than with last digit
  *Return: Always 0 (success)
  */
/* betty style doc for function main goes there */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastd = n % 10;

	if (lastd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{

		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}
	return (0);
}
