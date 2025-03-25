#include "main.h"
#include <stdio.h>

/**
*input_length - defines the length of the string
* @s: string to define
*
* Return: the length of the string
*/

int input_length(char *s)
{
	int i;

	if (s == NULL)
	{
		return (-1);
	}

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}

/**
* print_char - character to be defined
* @c: character to be printed
*
* Return: the correct character asked
*/

int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
* print_string - string to be print
* @string: the string given by user
*
* Return: the string to be print
*/

int print_string(char *string)
{
	int length;

	if (string == NULL)
	{
		return (-1);
	}

	length = input_length(string);

	return (write(1, string, length));
}

/**
* print_mod - pourcent to be printed
*
* Return: pourcent symbol
*/

int print_mod(void)
{
	return (write(1, "%", 1));
}

/**
* print_int - integer to be printed
* @n: number given by user
*
* Return: the number to be printed
*/
int print_number(int n)
{
	int num;
	int i;

	if (n == 0)
	{
		return (n);
	}

	if (n < 0)
	{
		_putchar ('-');
		num = -n;
	}

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (num / 10)
			{
				print_number(num / 10);
				_putchar((num % 10) + '0');
			}
		}
	}

	return (0);
}
