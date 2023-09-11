Preprocessor Macros
This repository contains C programs and header files that demonstrate the use of preprocessor macros in C programming. Each program and header file is described below:

Task 0: Object-like Macro
File: 0-object_like_macro.h
Defines a macro named SIZE as an abbreviation for the token 1024.

c
Copy code
#define SIZE 1024
Example Usage:

c
Copy code
#include "0-object_like_macro.h"
#include <stdio.h>

int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
Task 1: Pi
File: 1-pi.h
Defines a macro named PI as an abbreviation for the token 3.14159265359.

c
Copy code
#define PI 3.14159265359
Example Usage:

c
Copy code
#include "1-pi.h"
#include <stdio.h>

int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}
Task 2: File name
File: 2-main.c
Prints the name of the file it was compiled from, followed by a new line.

Example Usage:

c
Copy code
#include <stdio.h>

int main(void)
{
    printf(__FILE__ "\n");
    return (0);
}
Task 3: Function-like Macro
File: 3-function_like_macro.h
Defines a function-like macro ABS(x) that computes the absolute value of a number x.

c
Copy code
#define ABS(x) ((x) < 0 ? -(x) : (x))
Example Usage:

c
Copy code
#include <stdio.h>
#include "3-function_like_macro.h"

int main(void)
{
    int i;
    int j;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    return (0);
}
Task 4: SUM
File: 4-sum.h
Defines a function-like macro SUM(x, y) that computes the sum of the numbers x and y.

c
Copy code
#define SUM(x, y) ((x) + (y))
Example Usage:

c
Copy code
#include <stdio.h>
#include "4-sum.h"

int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
