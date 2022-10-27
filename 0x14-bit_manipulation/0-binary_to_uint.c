#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* powr - raises a number by a power
* @num: number to be raised
* @p: power
*
* Return: result of operation
* 1 if p is 0
*/
int powr(int num, int p)
{
	int i = 1;
	int n = num;

	if (p == 0)
		return (1);

	for (; i < p; i++)
		num *= n;

	return (num);
}

/**
* binary_to_uint - function that converts a
* binary number to an unsigned int
* @b: pointer to string of 0 and 1 chars
*
* Return: the converted number
* 0 if one or more chars in the string b is not 0 or 1
* b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	int count = 0, i = 0, j = 0;
	unsigned int k = 0, result = 0;

	if (b == NULL)
		return (0);

	while (b[i++])
		count++;

	count--;
	while (b[j])
	{
		k = b[j] - 48;
		if (!(k >= 0 && k <= 1))
			return (0);

		result += k * powr(2, count);
		count--;
		j++;
	}
	return (result);
}

