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

	for (; i < n + 1; i++)
	{
		k = 0;
		for (; k < 10; k++)
		{
			if (k == 9)
			{
				printf("%d", i * k);
			}
			else
			{
				printf("%d, ", i * k);
			}
		}
		printf("\n");
	}
}
