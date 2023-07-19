#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Represents information about a dog
 * @name: Pointer to a character representing the dog's name
 * @age: Floating-point variable representing the dog's age
 * @owner: Pointer to a character representing the dog owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
  * dog_t - is a typedef for sturct dog
  */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */
