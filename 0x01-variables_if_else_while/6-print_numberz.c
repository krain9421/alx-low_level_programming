#include <stdlib.h>
#include <stdio.h>
/**
* main - main function, program starts here
*
* Description: Prints all single digit Base10 numbers (putchar)
* Return: 0 if program runs successfully
*/
int main(void)
{
	int i;
	char n = '1';
	char ln = '\n'

	for (i = 0; i < 10; i++)
	{
	putchar(n);
	}
	putchar(ln);
	return (0);
}
