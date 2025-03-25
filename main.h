#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

int input_lenght(char *s);
int format_c(char *return_value);
int format_s(char *string);
int format_mod(void);
int print_number(int n);
int _putchar(char c);

#endif
