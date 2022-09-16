#include "main.h"

/**
* print_number - prints a number using only _putchar
* @num: the number to be printed
*
* Return: void
*/

void print_number(int num)
{
	unsigned int n = num;
	int tmp;
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
		if (n < 0)
		{
			_putchar('-');
			n = (n * -1);
		}
		tmp = n;

		do {
			dig++;
			tmp = tmp / 10;
		} while (tmp);
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

