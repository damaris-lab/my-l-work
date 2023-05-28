#include "main.h"
#include <unistd.h>
/**
 *main -prints _putchar
 * followed by a new linet
 *
 * Return: On success 0
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

