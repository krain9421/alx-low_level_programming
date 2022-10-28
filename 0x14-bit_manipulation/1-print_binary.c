#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* powr - raises a number by a power
* @num: number to be raised
* @p: power
*
* Return: result of operation
* 1 if p is 0
*/
int powr(int num, int p)
{
	int i = 1;
	int n = num;

	if (p == 0)
		return (1);

	for (; i < p; i++)
		num *= n;

	return (num);

}

/**
* get_bit2 - returns the value of a bit at a given index
* @n: number in decimal
* @index: index
*
* Return: value of the bit
*/
int get_bit2(unsigned long int n, int index)
{
	if (index > 64)
		return (-1);

	return ((n >> index) & 1);
}

/**
* print_binary - prints the binary
* representation of a number
* @n: number
*
* Return: void
*/
void print_binary(unsigned long int n)
{
	int bit = 0, count = 0;
	unsigned long int sum = 0;
	int i = 0;
	char c;

	for (; sum < n; i++)
	{
		bit = get_bit2(n, i);
		sum += bit * powr(2, i);
		count++;
	}
	if (count == 0)
		count = 0;
	else
		count--;

	for (i = count; i >= 0; i--)
	{
		bit = get_bit2(n, i);
		c = 48 + bit;
		_putchar(c);
	}
}

