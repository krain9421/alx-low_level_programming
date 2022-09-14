#include "main.h"

/**
* _abs - Computes the absolute value of an integer
* @n: the number to be checked
* Return: the absolute value of n
*/

int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}

