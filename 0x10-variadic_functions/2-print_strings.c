#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - function prints strings
* followed by a new line
* @separator: string to be printed between strings
* @n: number of strings
*
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	char *s;
	va_list args;

	va_start(args, n);

	while (i--)
	{
		s = va_arg(args, char *);
		if (s == NULL)
		{
			s = "(nil)";
		}
		printf("%s", s);
		if (i > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}

