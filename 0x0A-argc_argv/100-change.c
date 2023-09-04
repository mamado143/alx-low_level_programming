#include <stdio.h>
#include <stdlib.h>
/**
  * main - - prints the minimum number of coins
  * @argc: is an argument.
  * @argv: Is an array of arguments
  * Return: Returns 0 or 1.
  */
int main(int argc, char *argv[])
{
	int num, i, result;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;
	if (num < 0)
	{
		printf("Error\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= cents[i])
		{
			result++;
			num = num - cents[i];
		}
	}
	printf("%d\n", result);
	return (0);
}
