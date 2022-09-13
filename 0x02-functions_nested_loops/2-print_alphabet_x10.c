#include "main.h"

/**
* print_alphabet_x10 - Prints the alphabets in lowercase 10 times
* 
* Return - void
*/

void print_alphabet_x10(void)
{
int i = 0;
int j = 97;

for (; i < 10; i++)
{
j = 97;
for (; j < 123; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
