#include "main.h"
/**
 * _puts_recursion prints a string
 * @s: input of the string
 *
 *Return:0 if succeful
 */
void _puts_recursion(char *s);
{
		if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
		else
		_putchar('/n')
}


	


