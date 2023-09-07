roject Overview
This project consists of multiple C functions aimed at memory allocation and manipulation. The tasks involve functions to allocate memory, concatenate strings, create arrays of integers, and reallocate memory blocks. Additionally, there's a program that multiplies two positive numbers.

Task 0: malloc_checked
Function Signature
c
Copy code
void *malloc_checked(unsigned int b);
Description
This function allocates memory using malloc. If malloc fails, it causes the program to terminate with a status value of 98.

Example
c
Copy code
char *c;
int *i;
float *f;
double *d;

c = malloc_checked(sizeof(char) * 1024);
i = malloc_checked(sizeof(int) * 402);
f = malloc_checked(sizeof(float) * 100000000);
d = malloc_checked(INT_MAX);

// If any malloc call fails, the program terminates with exit status 98.
Task 1: string_nconcat
Function Signature
c
Copy code
char *string_nconcat(char *s1, char *s2, unsigned int n);
Description
This function concatenates two strings. The returned pointer points to a newly allocated space in memory, containing s1 followed by the first n bytes of s2, and null-terminated. If the function fails, it returns NULL. If n is greater or equal to the length of s2, it uses the entire string s2.

Example
c
Copy code
char *concat;

concat = string_nconcat("Best ", "School !!!", 6);
// Result: "Best School"

// If the allocation fails, it returns NULL.
Task 2: _calloc
Function Signature
c
Copy code
void *_calloc(unsigned int nmemb, unsigned int size);
Description
This function allocates memory for an array using malloc. It allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero. If nmemb or size is 0, it returns NULL. If malloc fails, it also returns NULL.

Example
c
Copy code
char *a;

a = _calloc(98, sizeof(char));
// Allocates and initializes an array of 98 characters.

// If the allocation fails, it returns NULL.
Task 3: array_range
Function Signature
c
Copy code
int *array_range(int min, int max);
Description
This function creates an array of integers. The array contains all values from min (included) to max (included), ordered from min to max. It returns a pointer to the newly created array. If min is greater than max, or if malloc fails, it returns NULL.

Example
c
Copy code
int *a;

a = array_range(0, 10);
// Creates an array containing integers from 0 to 10.

// If the allocation fails or min > max, it returns NULL.
Task 4: _realloc
Function Signature
c
Copy code
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
Description
This function reallocates a memory block using malloc and free. It takes a pointer ptr to memory previously allocated with malloc (of old_size bytes) and reallocates it to new_size bytes. The contents are copied to the newly allocated space up to the minimum of the old and new sizes. If new_size > old_size, the added memory is not initialized. If new_size is equal to old_size, it does nothing and returns ptr. If ptr is NULL, it's equivalent to calling malloc(new_size). If new_size is equal to zero and ptr is not NULL, it's equivalent to calling free(ptr) and returns NULL.

Example
c
Copy code
char *p;
int i;

p = malloc(sizeof(char) * 10);
p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
// Reallocates the memory block from 10 to 98 bytes and initializes it.

// If realloc or malloc fails, it returns NULL.
Task 5: Multiplying Positive Numbers
Program Usage
To multiply two positive numbers, use the program as follows:

shell
Copy code
./mul num1 num2
num1 and num2 should be passed in base 10.
The program prints the result followed by a new line.
If the number of arguments is incorrect, it prints "Error" and exits with a status of 98.
If num1 or num2 contains non-digit characters, it prints "Error" and exits with a status of 98.
Example
shell
Copy code
./mul 10 98
// Output: 980

./mul 235234693269436436223446526546334576437634765378653875874687649698659586695898579 28658034365084365083426083109679137608216408631430814308651084650816406134060831608310853086103769013709675067130586570832760732096730978014607369739567864508634086304807450973045703428580934825098342095832409850394285098342509834209583425345267413639235755891879970464524226159074760914989935413350556875770807019893069201247121855122836389417022552166316010013074258781583143870461182707893577849408672040555089482160343085482612348145322689883025225988799452329290281169927532160590651993511788518550547570284574715920006962738262888617840435389140329668772644708
// Output: The result of the multiplication of these huge numbers.
Repository
GitHub repository: alx-low_level_programming
Directory: 0x0C-more_malloc_free
Files:
0-malloc_checked.c
1-string_nconcat.c
2-calloc.c
3-array_range.c
100-realloc.c
101-mul.c
