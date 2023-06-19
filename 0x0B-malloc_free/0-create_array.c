#include "main.h"
#include <stdio.lib>
/**
 * create_array - create an array of chars and initialize it with specific char
 *@size : size of memory
 *@c : character to initialize an array
 *
 *Return : pointer to an arry and if null if unsuccessful
 */
char *create_array(unsigned int size, char c)
{
		char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}



	

	

	

