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
	int i, n;
	char ch = 'a';

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	for (i = 0; i < 26; i++)
	putchar(ch++);
	return (0);
}
