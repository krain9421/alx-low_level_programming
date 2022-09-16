#include "main.h"

/**
* print_triangle - draws a triangle on the terminal
* @size: the size of the traingle
*
* Return: void
*/

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, l;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
			{
				_putchar(' ');
			}
			for (l = 1; l <= i; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

