#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/*i*
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: Pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	int total_length = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
				total_length++;
		total_length++; 
		concat = malloc((total_length + 1) * sizeof(char));
		if (concat == NULL)
			return (NULL);
		k = 0;

		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++, k++)
				concat[k] = av[i][j];
			concat[k] = '\n'; // Add the newline character
			k++;
		}
		concat[k] = '\0'; // Add the null-terminating character
	}
	return (concat);
}

