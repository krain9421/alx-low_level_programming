#include "main.h"
#include <stdio.h>

/**
* print_diagsums - function prints the sum
* of two diagonals of a square matrix of integers
* @a: input pointer
* @size: size of the matrix
*
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i = 0;
	int diag1 = 0;
	int diag2 = 0;

	for (; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
		{
			diag1 += *(a + i);
		}
		if (i % (size - 1) == 0 && i != 0 && i < (size * size - 1))
		{
			diag2 += *(a + i);
		}
	}

	printf("%d, %d\n", diag1, diag2);
}

