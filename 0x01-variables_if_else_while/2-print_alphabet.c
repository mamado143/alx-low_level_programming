#include <stdio.h>
/**
  *main - Entry point
  *Description - print a program printing alphabat using putchar
  *Return: Always return 0 (success)
  */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	return (0);
}
