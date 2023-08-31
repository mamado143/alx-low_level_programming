#include "main.h"
/**
  * factorial - This function is a factorial of given number.
  * @n: is an integer of number.
  * Return: returns 1 or -1.
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}
	return (factorial(n - 1) * n);
}
