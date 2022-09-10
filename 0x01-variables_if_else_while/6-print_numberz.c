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
	int i = 0;
	char string[] = "0123456789\n";

	while (string[i] != '\0')
	{
	putchar(string[i]);
	}
	return (0);
}
