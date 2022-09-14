#include "main.h"

/**
* _print_last_digit - Prints the last digit of a number
* @n: the number to be checked
* Return: the last digit of n
*/

int print_last_digit(int n)
{
	int abs = _abs(n);
	int last = abs % 10;

	_putchar('0' + last);
	return (last);
}

