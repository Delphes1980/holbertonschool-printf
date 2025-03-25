#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

int input_lenght(char *s);
int print_char(char *return_value);
int print_string(char *string);
int print_mod(void);
int print_number(int n);
int _putchar(char c);

#endif
