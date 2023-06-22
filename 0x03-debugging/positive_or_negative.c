#include "main.h"
/**
  *positive_or_negative - This function is checkeing.
  *the positvie and negative numbers
  *@i: if statiment for checking
  */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negetive\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
