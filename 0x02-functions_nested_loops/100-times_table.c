#include "main.h"
#include <stdio.h>

/**
* print_times_table - Prints the n times table, startinf from 0
* @n: Integer specifying the times table to be printed
* Prints nothing if n i greater than 15 or less than 0
*
* Return: void
*/

void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{}
	else
	{
		int i = 0;
		int k;

		for (; i < n + 1; i++)
		{
			k = 0;
			for (; k < 10; k++)
			{
				if (k == 9)
				{	
					printf("%2d\n", i * k);
				}
				else if (k == 0)
				{
					printf("%-d, ", i * k);
				}
				else
				{
					printf("%2d, ", i * k);
				}
			}
		}
	}
}

