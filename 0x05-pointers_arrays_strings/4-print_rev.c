#include "main.h"

/**
* print_rev - function prints a string, in reverse
* @s: string to be printed in reverse
*
* Return: void
*/

void print_rev(char *s)
{
	int i = 0;
	int j;
	char *stmp = s;

	while (*stmp != '\0')
	{
		i++;
		stmp++;
	}

	for (j = (i - 1); j >= 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}

