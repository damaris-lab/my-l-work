#include "main.h"
/**
 * flip_bits - return number of bits that would need to be flipped to
 * transform one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip to convert numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, count;

	count = 0;
	x = n ^ m;

	while (x != 0)
	{
		x &= (x - 1);
		count++;
	}

	return (count);
}

