#include "main.h"

/**
* swap_int - function swaps the value of two integers
* @a: the pointer of the first integer to be swapped
* @b: the pointer of the second integer to be swapped
*
* Return: void
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

