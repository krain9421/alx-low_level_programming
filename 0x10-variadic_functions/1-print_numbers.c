#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - function prints numbers followed
* by a new line
* @separator: string to be printed between numbers
* @n: number of integers to be printed
*
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	int num = 0;
	va_list args;

	va_start(args, n);
	while (i--)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (i > 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

