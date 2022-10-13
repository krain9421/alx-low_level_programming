#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
* sum_them_all - function that returns the
* sum of all its parameters
* @n: number of parameters
*
* Return: sum
* 0 if n is 0
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = n;
	int sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	while (i--)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);

}

