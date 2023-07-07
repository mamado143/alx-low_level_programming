#C - Static libraries


##TASKS

Table of Contents
Introduction
Tasks
Task 0: Creating the Static Library
Task 1: Script for Creating Static Library
Instructions
Prerequisites
Getting Started
Compiling the Static Library
Running the Script
Contributing
License
Introduction
This project focuses on creating a static library in the C programming language. A static library is a collection of precompiled functions that can be linked to a program during the compilation phase. It provides code reusability and modularization, making development more efficient.

Tasks
Task 0: Creating the Static Library
The static library libmy.a needs to be created. It should contain the following functions:

int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _atoi(char *s);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
If any of the functions have not been implemented yet, you should create empty functions with the correct prototypes.

Make sure to push your main.h file to the repository, which should contain all the function prototypes.

Task 1: Script for Creating Static Library
To automate the process of creating the static library, a script called create_static_lib.sh has been provided. This script creates a static library named liball.a from all the .c files in the current directory.

Instructions
Follow the instructions below to successfully compile the static library and run the script.

Prerequisites
C compiler (e.g., GCC)
POSIX-compliant shell (e.g., Bash)
Getting Started
Clone the repository to your local machine:

bash
Copy code
git clone https://github.com/your-username/repository-name.git
Navigate to the project directory:

bash
Copy code
cd repository-name
Compiling the Static Library
To compile the static library libmy.a, follow these steps:

Compile the source files:

r
Copy code
gcc -c *.c
Create the static library:

Copy code
ar -rc libmy.a *.o
Index the library:

Copy code
ranlib libmy.a
Running the Script
To run the create_static_lib.sh script, use the following command:

bash
Copy code
./create_static_lib.sh
This script will create a static library named liball.a by collecting and combining all the .c files in the current directory.

Contributing
Contributions are welcome! If you would like to contribute to this project, please follow these steps:

Fork the repository.
Create a new branch.
Make your changes.
Commit your changes.
Push the branch to your forked repository.
Submit a pull request.
License
This project is licensed under the @Mido License. You are free to use, modify, and distribute this code.





