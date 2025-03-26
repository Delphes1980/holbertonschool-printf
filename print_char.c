#include "main.h"

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
