#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry point of the program.
  * @argc: an argument of int.
  * @argv: is an array of arguments.
  * Return: returns always 0 or 1.
  */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;
	int num;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		if (num > 0)
		{
			sum = sum + num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
