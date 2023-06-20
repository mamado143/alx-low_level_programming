#include <stdio.h>
/**
  *main - Entry point
  *Description - Write a program about _putchar
  *Return: Always 0 (success)
  */
int main(void)
{
	const char *str = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
