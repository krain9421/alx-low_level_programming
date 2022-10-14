#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - function that prints anything
* @format: list of all arguments passed to the function
*
* Return: void
*/

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *s, *seprtr;
	va_list args;

	va_start(args, format);
	seprtr = "";

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", seprtr, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", seprtr, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", seprtr, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", seprtr, s);
					break;
				default:
					i++;
					continue;
			}
			seprtr = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}

