# alx-low_level_programming - Command Line Arguments

This repository contains a collection of C programs that demonstrate various functionalities related to command line arguments. Each program is designed to perform a specific task related to command line argument handling. Below, you will find a description of each program and how to compile and run them.

## Program Descriptions

### 0-whatsmyname.c
- This program prints its own name (the name of the executable file) followed by a newline.
- If you rename the program, it will print the new name without needing to recompile it.
- The program retains the path before the name of the program.

#### Usage:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
./mynameis
mv mynameis mynewnameis
./mynewnameis
## Program Descriptions

### 1-args.c
This program prints the number of arguments passed into it.
It prints the count of arguments, followed by a newline.
#### Usage:
bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
./nargs
./nargs hello
./nargs "hello, world"
./nargs hello, world
2-args.c
This program prints all the arguments it receives, one argument per line.
It includes the first argument (the name of the program itself).
Usage:
bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
./args
./args "You can do anything, but not everything."
### 3-mul.c

This program multiplies two numbers passed as command line arguments and prints the result.
It expects exactly two integer arguments and prints the result, followed by a newline.
If not provided with two arguments, it prints "Error" and returns 1.
Usage:
bash

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
./mul 2 3
./mul 2 -3
./mul 2 0
./mul 245 3245342
./mul
4-add.c
This program adds positive numbers passed as command line arguments and prints the result.
It expects one or more integer arguments and prints the sum, followed by a newline.
If any argument is not a valid integer, it prints "Error" and returns 1.
If no arguments are provided, it prints 0.
Usage:
bash

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
./add 1 1
./add 1 10 100 1000
./add 1 2 3 e 4 5
./add
100-change.c
This advanced program calculates the minimum number of coins needed to make change for a given amount of cents.
It expects one integer argument (the amount in cents) and prints the minimum number of coins, followed by a newline.
If no argument is provided, it prints "Error" and returns 1.
If the argument is negative, it prints 0.
It can use an unlimited number of coins with values 25, 10, 5, 2, and 1 cent.
Usage:
bash
Copy code
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-change.c -o change
./change
./change 10
./change 100
./change 101
./change 13
Repository Structure
GitHub Repository: alx-low_level_programming
Directory: 0x0A-argc_argv
Each program is located in its respective file as mentioned in the program descriptions above.

