#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - main function, program starts here
*
* Description: Last digit of a number
* Return: 0 if program runs successfully
*/
int main(void)
{
	int n, n_end;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	n_end = n % 10;
	if (n_end > 5)
	printf("Last digit of %d is %d and is greater than 5\n",
	n, n_end);
	else if (n_end == 0)
	printf("Last digit of %d is %d and is 0\n",
	n, n_end);
	else if (n_end < 6 && n_end != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n_end);
	return (0);
}
