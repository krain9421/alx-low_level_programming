#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: integer to find square root of
*
* Return: square root or -1
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_sqrt(1, n));
}

/**
* _sqrt - checks for square root of n
* @i: index to start from
* @n: number to check square root
*
* Return: square root or -1 if not found
*/

int _sqrt(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt(i + 1, n));
}

