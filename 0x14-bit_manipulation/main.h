#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int _putchar(char c);
unsigned int binary_to_unit(const char *b);
void print_binary(unsigned long int n);
int clear_bit(unsigned long int *n, unsigned int index);
#endif
