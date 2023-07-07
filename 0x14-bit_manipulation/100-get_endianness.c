#include "main.h"
/**
 * get_endianness - return the endianness of the machine
 *
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	int x = 1;
	char *copy = (char *)&x;

	if (*copy == 1)
		return (1);
	else
		return (0);
}

