#include "main.h"

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
