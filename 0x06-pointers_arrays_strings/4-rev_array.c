#include "main.h"

/**
* reverse_array - function reverses the elements of an array
* @a: array to be reversed
* @n: number of elements in the array
*
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < (n / 2))
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
	}
}

