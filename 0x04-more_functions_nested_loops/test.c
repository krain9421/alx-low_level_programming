#include "main.h"

/**
* print_number - prints a number using only _putchar
* @n: the number to be printed
*
* Return: void
*/

void print_number(int n)
{
	int tmp = n;
	int dig;
	int tdig;
	int i;
	int k;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
	do
	{
		dig++;
		tmp = tmp / 10;
	} while (tmp);

	if (n < 0)
	{
		_putchar('-');
		n = (n * -1);
	}

	for (i = 0; i < dig; i++)
	{
		tdig = dig;
		tmp = n;
		k = i;
		while (tdig > (k + 1))
		{
			tmp = tmp / 10;
			--tdig;
		}
		_putchar('0' + (tmp % 10));
	}
	}
	_putchar('\n');
}

