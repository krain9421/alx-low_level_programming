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
			for (; k < n + 1; k++)
			{
				if (k == n)
				{	
					printf("%3d\n", i * k);
				}
				else if (k == 0)
				{
					printf("%-d, ", i * k);
				}
				else
				{
					printf("%3d, ", i * k);
				}
			}
		}
	}
}

