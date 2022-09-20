#include <stdio.h>
#include "main.h"

/**
* print_array - function prints elements of an array
* @a: array name
* @n: number of arrays to be printed
*
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
			 _putchar('\n');
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}

