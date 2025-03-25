#ifndef MAIN_H
#define MAIN_H

int input_lenght(char *s);
int format_c(char *return_value);
int format_s(char *string);
int format_mod(void);

/** 
 * struct return_value - Struct coresonding of given arguments by user.
 * @integer: integer given by user.
 * @character: character given by user.
 * @symbol: symbol given by user.
 * Description: structure of the differents arguments
 * that could be given by user as character
 */
struct return_value
{
	int integer;
	char character;
	char symbol;
};

#endif
