#include"main.h"
/**
 * _print_rev_recursion reverse of a string
 * @s:output of the sring
 */
void _print_rev_recursion(char *s);
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

