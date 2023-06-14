#include "main.h"
#include <stdio.lib>
/**
 * create_array - create an array of chars and initialize it with specific char
 *@size : size of memory
 *@c : character to initialize an array
 *
 *Return : pointer to an arry and if null if unsuccessful
 */
char *create_array(unsigned int size, char c);
{
	char *ptr;
	unsigned int i;
	if (size < 1)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (ptr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
	}
	else
		return (NULL);
}

	

	

	

