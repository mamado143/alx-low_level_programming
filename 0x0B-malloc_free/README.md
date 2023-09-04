# README

## Description

This repository contains C programs for various memory allocation and deallocation tasks using `malloc` and `free`. Each task is implemented as a separate C file and comes with a main program to test the functionality.

## Files and Directories

1. **`0-create_array.c`**
   - **Task 0: Float like a butterfly, sting like a bee**
   - Function that creates an array of characters and initializes it with a specific character.
   - Prototype: `char *create_array(unsigned int size, char c);`

2. **`1-strdup.c`**
   - **Task 1: The woman who has no imagination has no wings**
   - Function that duplicates a string using `malloc`.
   - Prototype: `char *_strdup(char *str);`

3. **`2-str_concat.c`**
   - **Task 2: He who is not courageous enough to take risks will accomplish nothing in life**
   - Function that concatenates two strings into a newly allocated space.
   - Prototype: `char *str_concat(char *s1, char *s2);`

4. **`3-alloc_grid.c`**
   - **Task 3: If you even dream of beating me you'd better wake up and apologize**
   - Function that creates a 2-dimensional array of integers and initializes it to 0.
   - Prototype: `int **alloc_grid(int width, int height);`

5. **`4-free_grid.c`**
   - **Task 4: It's not bragging if you can back it up**
   - Function that frees a 2-dimensional grid previously created by `alloc_grid`.

6. **`100-argstostr.c`**
   - **Task 5 (Advanced): It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe**
   - Function that concatenates all the arguments of your program into a single string.
   - Prototype: `char *argstostr(int ac, char **av);`

7. **`101-strtow.c`**
   - **Task 6 (Advanced): I will show you how great I am**
   - Function that splits a string into words (array of strings) based on spaces.
   - Prototype: `char **strtow(char *str);`

## How to Compile and Test

Each task has its own main program for testing. You can compile and test each task separately using the following commands:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 task-main.c task.c -o task
./task
```
