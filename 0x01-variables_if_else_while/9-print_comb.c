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
	int i;
	int num = 48;

	for (i = 0; i < 10; i++)
	{
	putchar(num++);
	putchar(",");
	putchar(" ");
	}
	return (0);
}
