#include "main.h"
/**
  *_pow_recursion - funciton to return the pow of integer.
  * @x: is an integer.
  * @y: is an integer.
  * Return: returns recurtion.
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

