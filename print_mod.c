#include "main.h"
#include <unistd.h>

/**
* print_mod - pourcent to be printed
*
* Return: pourcent symbol
*/

int print_mod(void)
{
	return (write(1, "%", 1));
}
