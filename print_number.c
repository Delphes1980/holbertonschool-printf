#include "main.h"
<<<<<<< HEAD
=======

>>>>>>> 4a5f3701888374666adaeaef7ce821a135f2891a
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
<<<<<<< HEAD
	_putchar('0');
=======
	{
		return (n);
	}
>>>>>>> 4a5f3701888374666adaeaef7ce821a135f2891a

	if (n < 0)
	{
		_putchar ('-');
		count++;
		num = -n;
	}

	else
	{
	num = n;
	}

	if (num / 10)
<<<<<<< HEAD
	count += print_number(num / 10);

_putchar((num % 10) + '0');
count++;

return (count);
}
=======
	{
		count += print_number(num / 10);
	}

	_putchar((num % 10) + '0');

	return (count);
>>>>>>> 4a5f3701888374666adaeaef7ce821a135f2891a
