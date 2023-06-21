#include "main.h"
/**
  *print_last_digit - prints the last ten digts
  * @n: - compute the last 10 digits
  *Return: value of the degtis return last
  */
int print_last_digit(int n)
{
	int last_ten;

	last_ten = n % 10;
	if (last_ten < 0)
	{
		last_ten *= -1;
	}
	_putchar(last_ten + '0');
	return (last_ten);
}
