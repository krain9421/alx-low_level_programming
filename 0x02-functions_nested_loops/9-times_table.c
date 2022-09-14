#include "main.h"
#include <stdio.h>

/**
* times_table - Prints the 9 times table, startinf from 0
*
* Return: void
*/

void times_table(void)
{
	int i = 0;
	int k;

	for (; i < 10; i++)
	{
		k = 0;
		for (; k < 10; k++)
		{
			if (k == 9)
			{
				printf("%2d\n", i * k);
			}
			else
			{
				printf("%2d, ", i * k);
			}
		}
	}
}

