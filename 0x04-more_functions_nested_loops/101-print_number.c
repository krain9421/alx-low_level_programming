#include "main.h"

/**
* print_number - prints a number using only _putchar
* @n: the number to be printed
*
* Return: void
*/

void print_number(int n)
{
	if (n == -2147483648)
	{
		n = 2147483647;
	}
	int tmp = n;
	int dig = 0;
	int tdig;
	int i;
	int k;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		do {
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
}

