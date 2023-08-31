#include "main.h"
#include <stdio.h>
/**
  * is_prime_number - is a function which checks the prime numbers
  * @n: an integer
  * @n2: an integer.
  * Return: 0 or 1
  */
int check_prime_number(int n, int n2);


int is_prime_number(int n)
{
	return (check_prime_number(n, 2));
}
/**
  * check_prime_number - check all numbers less than n..
  * @n: an integer.
  * @n2: an integer.
  * Return: int.
  */
int check_prime_number(int n, int n2)
{
	if (n2 >= n && n > 1)
		return (1);
	else if (n % n2 == 0 || n <= 1)
		return (0);
	else
		return (check_prime_number(n, n2 + 1));
}
