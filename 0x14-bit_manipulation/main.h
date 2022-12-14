#ifndef MAIN_H
#define MAIN_H

#include <stdint.h>
#include <stdio.h>

#define BIT(x) (1 << (x))
#define BIT_SET(x, y) ((x) |= (y))
#define BIT_CLEAR(x, y) ((x) &= ~(y))
#define BIT_FLIP(x, y) ((x) ^= (y))
#define BIT_CHECK(x, y) ((x) & (y))

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);



#endif