#include "main.h"
/**
 * _puts_recursion prints a string
 * @s: input of the string
 *
 *return void
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	s++;
	_puts_recursion(s);
}

	


