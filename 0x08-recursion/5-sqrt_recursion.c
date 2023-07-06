#include "main.h"
/**
  * _sqrt_recursion - find natural square root.
  * @n: integer.
  * @val: square root.
  * Return: returns 0.
  */
int square(int r, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
  * square - This funciton is to find the square root.
  * @n: is an integer.
  * @val: is a square root.
  * Return: int.
  */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
