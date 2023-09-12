#include "main.h"
/**
 *print_last_digit - Prints last digit of number.
 *@arg: the type from input (int).
 *Return: last> the value of last digit,
 *	  0 if digit is zero or none numeric type.
 */

int print_last_digit(int arg)
{
	if (arg != 0)
	{
		int last = arg % 10;

		return (last);
	}
	else
	{
		return (0);
	}
}
