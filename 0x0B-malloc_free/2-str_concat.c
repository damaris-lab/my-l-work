#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concantenate two strings
 * @s1: pointer to string to concantenate to
 * @s2: pointer to string to be concantenated to s1
 *
 * Return: pointer to s1
 *  NULL for failure
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	char *len;
	char *dest;
	int count;
	int i;
	int j;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	for (len = s2, count = 0; *len; count++, len++)
		;
	for (dest = s1; *dest; count++, dest++)
		;
	str = malloc(sizeof(char) * count + 1);
	if (str != NULL)
	{
		for (i = 0; s1[i]; i++)
			str[i] = s1[i];
		for (j = 0; s2[j]; j++, i++)
			str[i] = s2[j];
		str[i] = '\0';
		return (str);
	}
	else
		return (NULL);
}
