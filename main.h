#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

int input_length(char *s);
int print_char(char c);
int print_string(char *string);
int print_mod(void);
int print_number(int n);

#endif
