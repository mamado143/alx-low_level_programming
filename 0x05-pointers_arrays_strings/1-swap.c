#include "main.h"
/**
  *swap_int - This function is swaping the integers
  *@a: is an pointer variable.
  *@b: is a pointer varibale.
  *Return: return 0.
  */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

