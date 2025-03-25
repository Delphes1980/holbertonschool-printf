#include "main.h"

if (input_length == 0)
{
	return (NULL);
}

if (print_char == "c")
{
	write(1, print_char, 1);
}

else if (string == "s")
{
	if ("s" == NULL)
	{
		return (NULL);
	}

	write(1, print_string, 1);
}

else if (print_mod == "%")
{
	write(1, "%", 1);
}

else
{
	return (NULL);
}
