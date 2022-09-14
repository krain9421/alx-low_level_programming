#include "main.h"

/**
* print_last_digit - Prints the last digit of a number
* @n: the number to be checked
* Return: the last digit of n
*/

int print_last_digit(int n)
{
	int abs = n * ((n > 0) - (n < 0));
	int l = abs % 10;
	int last = l * ((l > 0) - (l < 0));

	_putchar('0' + last);
	return (last);
}

