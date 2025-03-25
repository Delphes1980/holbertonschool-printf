# **_printf**

### **Description :**

_printf is a simplified reimplementation of the standard C printf function. It prints formatted text to the standard output and supports the following format specifiers:

%c: Prints a character

%s: Prints a string

%%: Prints the % character

%d / %i: Prints a signed integer in base 10

## **Prototype :**

int _printf(const char *format, ...);

## **Features :**

Handles variadic arguments using stdarg.h

Prints strings and integers

Avoids using printf and relies only on write

Implements a minimal version of printf without handling flags, width, precision, or length modifiers

## **Compilation :**

The program can be compiled using gcc as follows:

gcc -Wall -Werror -Wextra -pedantic *.c -o printf

## **Usage :**

#include "main.h"

int main(void)

{
	
    _printf("Hello, %s!\n", "world");

    _printf("Character: %c\n", 'A');

    _printf("Percentage: %%\n");

    _printf("Number: %d\n", 42);

    return (0);
}

Expected output:

Hello, world!

Character: A

Percentage: %

Number: 42

## **Main Files :**

main.h: Contains function declarations and necessary includes.

_printf.c: Implements the _printf function and handles format specifiers.

formats.c: Contains helper functions for printing characters and strings.

## **Authors :**

Delphine Coutouly-laborda

Hammadi Hamza