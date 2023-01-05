#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string
 * Return: On Success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
