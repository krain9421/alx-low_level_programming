#include "main.h"

/**
* puts_half - prints half of a string
* @str: string to be printed
* Return: void
*/

void puts_half(char *str)
{

	int i, half, lng = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		lng++;
	}

	half = (lng / 2);
	if ((lng % 2) == 1)
	{
		half = (lng + 1) / 2;
	}
	for (i = half; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

