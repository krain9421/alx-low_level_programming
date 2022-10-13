#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - performs operation on two integers
* @a: first integer
* @b: second integer
*
* Return: result of operation
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - performs operation on two integers
* @a: first integer
* @b: second integer
*
* Return: result of operation
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - performs operation on two integers
* @a: first integer
* @b: second integer
*
* Return: result of operation
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - performs operation on two integers
* @a: first integer
* @b: second integer
*
* Return: result of operation
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - performs operation on two integers
* @a: first integer
* @b: second integer
*
* Return: result of operation
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

