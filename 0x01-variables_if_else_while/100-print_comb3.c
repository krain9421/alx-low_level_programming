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
	int i, j;
	int n1 = 48;
	int n2 = 49;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (n1 >= n2 + j)
			{
			}
			else
			{
				putchar(n1);
				putchar(n2 + j);
				putchar(',');
				putchar(' ');
			}
		}
	n1++;
	}
	return (0);
}
