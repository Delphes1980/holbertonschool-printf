#include "main.h"

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
		string = "(null)";
	}

	length = input_length(string);

	return (write(1, string, length));
}
