#include <stdio.h>

/**
* main - main function, program starts here
*
* Description: Program prints out size of various types
* Return: 0 if program runs successfully
*/
int main(void)
{
int i = 0;
int sizez[5] = {sizeof(char), sizeof(int), sizeof(long int),
	sizeof(long long int), sizeof(float)};
char types[5][20] = {"char", "int", "long int",
	"long long int", "float"};
for (i = 0; i < 5; i++)
{
if (i == 1)
printf("Size of an %s: %d byte(s)\n", types[i], sizez[i]);
else
printf("Size of a %s: %d byte(s)\n", types[i], sizez[i]);
}
return (0);
}
