#include "main.h"

/**
* print_number - prints a number
* @n: the number to be printed
*
* Return: void
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n/10)
	{
		print(n/10);
	}

	_putchar('0' + n % 10);
}

