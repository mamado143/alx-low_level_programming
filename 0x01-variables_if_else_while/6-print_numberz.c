#include <stdio.h>
/**
 *main - Entry point
 *Desription - Write a program prints all digit numbers of base 10 starting from 0
 *Return: Always return 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar ('0' + n);
	}
	putchar ('\n');
	return (0);
}
