#include "main.h"

/**
* print_sign - Checks for lowercase character
*
* Return: 1 if n is positive
* Return 0 if n is zero
* Return -1 if n is negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n = 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

