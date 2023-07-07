#include "main.h"
/**
 *set_bit - set a bit at a given index
 * @n: bit
 * @index: required bit
 * Return: value of bit at index or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | 1ul << index;
	return (1);
}
