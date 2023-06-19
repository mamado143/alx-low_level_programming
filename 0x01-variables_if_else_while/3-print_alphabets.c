#include <stdio.h>
/**
  *main - Entry point
  *Description - This program is prints both alphabat in small and big case
  *Return: Always return 0 (success)
  */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
