#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - main function, program starts here
*
* Description: Prints alphabets in lowercase
* Return: 0 if program runs successfully
*/
int main(void)
{
	int i;
	char ch = 'a';

	for (i = 0; i < 26; i++)
	{
	if (ch == 'q' || ch == 'e')
	ch++;
	else
	putchar(ch++);
	putchar('\n');
	}
	return (0);
}
