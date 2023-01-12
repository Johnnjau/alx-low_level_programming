#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isdigit - checks if int c is a digit
 *
 * @c: integer c
 * Return: 1 if true or 2 if false
 */
int _isdigit(int c)
{
	return (c >= 48 && c < 58);
}
