#include <stdio.h>
/**
  *main - Entry point
  *Description - Write a program printing all Alphabets except q & e
  *Return: Always return 0 <success>
  */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
