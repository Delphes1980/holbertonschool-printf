<<<<<<< HEAD

/**
* print_number - integer to be printed
* @n: the numbers
*
* Return: The number printed
*/
int print_number(int n)
{
	unsigned int num;
	int count = 0;

	if (n == 0)
	return (n);
=======
#include "main.h"

/**
* print_number - integer to be printed
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
>>>>>>> 51ad31bb2b4a4128008a1d063f0ce23153bc61d3

	if (n < 0)
	{
		_putchar ('-');
<<<<<<< HEAD
		count++;
		num = -n;
	}

	else
	{
	num = n;
	}

	if (num / 10)
	count += print_number(num / 10);

_putchar((num % 10) + '0');

return (count);
=======
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
>>>>>>> 51ad31bb2b4a4128008a1d063f0ce23153bc61d3
}
