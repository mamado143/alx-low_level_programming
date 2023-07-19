#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints the members of a struct dog
 * @d: Pointer to the struct dog to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "nil");
		printf("Age: %.2f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "nil");
	}
}
