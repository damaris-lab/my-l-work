#include "main.h"
/**
 *get_bit - returns a bit at a given value
*@n:binary no
*@index: index of the bit
*Return:the value at index,on error -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int k;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	k = 1UL << index;

	if ((n & k) != 0)
		return (1);
	else
		return (0);
}

