#include "main.h"
#include <string.h>

/**
  * print_chessboard - This function prints chessboard.
  * @a: is a an array  pointer.
  * Return: return prints.
  */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
