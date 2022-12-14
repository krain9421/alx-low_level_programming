#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int powr(int num, int p);
unsigned int binary_to_uint(const char *b);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
int get_endianness(void);
int get_bit2(unsigned long int n, int index);
void print_binary(unsigned long int n);

#endif

