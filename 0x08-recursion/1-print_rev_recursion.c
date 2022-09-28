#include "main.h"

/**
* _print_rev_recursion - function that prints a string
* in reverse
* @s: string to be printed
*
* Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*(s++))
	{
		_print_rev_recursion(s);
	}
	if (*(--s))
	_putchar(*(s));
}

