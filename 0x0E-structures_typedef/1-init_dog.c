#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - Initializes a struct dog with given values
 * @d: Pointer to the struct dog to be initialized
 * @name: Pointer to a character representing the dog's name
 * @age: Floating-point value representing the dog's age
 * @owner: Pointer to a character representing the dog owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

