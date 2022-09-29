#include "main.h"

/**
* is_prime_number - function checks for prime number
* @n: number to check
*
* Return: 1 if prime, 0 otherwise
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2 || n == 3 || n == 5 || n == 7)
	{
		return (0);
	}
	else if ((n % 2) && (n % 3) && (n % 5) && (n % 7))
	{
		return (1);
	}
	return (0);
}

