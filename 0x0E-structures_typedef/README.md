C Structures and Typedef
This repository contains C programs and header files that demonstrate the use of structures and typedef in C programming. Each program and header file is described below:

Task 0: Poppy
File: dog.h
Defines a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *

struct dog
{
    char *name;
    float age;
    char *owner;
};
Example Usage:

#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
Task 1: A dog is the only thing on earth that loves you more than you love yourself
File: 1-init_dog.c
Defines a function init_dog that initializes a variable of type struct dog.

void init_dog(struct dog *d, char *name, float age, char *owner);
Example Usage:

#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
Task 2: A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
File: 2-print_dog.c
Defines a function print_dog that prints the contents of a struct dog.


void print_dog(struct dog *d);

C Structures and Typedef
This repository contains C programs and header files that demonstrate the use of structures and typedef in C programming. Each program and header file is described below:

Task 0: Poppy
File: dog.h
Defines a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *

struct dog
{
    char *name;
    float age;
    char *owner;
};


#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
Task 1: A dog is the only thing on earth that loves you more than you love yourself
File: 1-init_dog.c
Defines a function init_dog that initializes a variable of type struct dog.

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
Output:

makefile
Name: Poppy
Age: 3.500000
Owner: Bob
Task 3: Outside of a dog, a book is a man's best friend. Inside of a dog, it's too dark to read
File: dog.h
Defines a new type dog_t as a new name for the type struct dog.

typedef struct dog dog_t;

#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
Task 4: A door is what a dog is perpetually on the wrong side of
File: 4-new_dog.c
Defines a function new_dog that creates a new struct dog and returns a pointer to it. It stores a copy of name and owner.


dog_t *new_dog(char *name, float age, char *owner);

#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
Task 5: How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
File: 5-free_dog.c
Defines a function free_dog that frees memory allocated for a struct dog.

c
void free_dog(dog_t *d);
Example Usage:

c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}c
