#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - main function, program starts here
*
* Description: Prints all numbers of Base16 in lowercase
* Return: 0 if program runs successfully
*/
int main(void)
{
	int i;
	char alpha = 'a';
	int num = 48;

	for (i = 0; i < 10; i++)
	{
	putchar(num++);
	}
	for (i = 0; i < 5; i++)
	{
	putchar(alpha++);
	}
	putchar('\n');
	return (0);
}
