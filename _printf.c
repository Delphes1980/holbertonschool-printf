#include "main.h"
#include <stdio.h>

/**
* _printf - implementation of printf command
* @format: list of types of arguments passed to the function
*
* Return: the string to be printed
*/

int _printf(const char *format, ...)
{
	int i;
	int count = 0;

	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == 'c')
				count += print_char(va_arg(args, int));

			else if (format[i] == 's')
				count += print_string(va_arg(args, char *));

			else if (format[i] == 'd' || format[i] == 'i')
				count += print_number(va_arg(args, int));

			else if (format[i] == '%')
			{
				count += write(1, "%", 1);
				continue;
			}

			else
			count += write(1, &format[i], 1);
		}

		else
		{
			count += write(1, &format[i], 1);
		}
	}

	va_end(args);
	return (count);
}
