#include "main.h"

/**
* print_last_digit - Prints the last digit of a number
* @n: the number to be checked
* Return: the last digit of n
*/

int print_last_digit(int n)
{
	if (n == INT_MIN)
	{
		n = 8;
	}
	int abs = n * ((n > 0) - (n < 0));
	int last = abs % 10;

	_putchar('0' + last);
	return (last);
}

