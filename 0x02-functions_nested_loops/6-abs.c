#include "main.h"
/**
 * _abs - Checks the absolute value of zero
 * @n: - The number to be computed by abs.
 * Description this fucnction is checks the abs of zero
 * Return: returns absolute value of number or zero.
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_value;

		abs_value = n * -1;
		return (abs_value);
	}
	return (n);
}
