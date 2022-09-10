#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - main function, program starts here
*
* Description: Prints all combination of single-digit numbers
* Return: 0 if program runs successfully
*/
int main(void)
{
	int i = 0;
	int num = 48;

	while (i < 9)
	{
	putchar(num++);
	putchar(',');
	putchar(' ');
	i++;
	}
	putchar(num);
	return (0);
}
