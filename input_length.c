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
