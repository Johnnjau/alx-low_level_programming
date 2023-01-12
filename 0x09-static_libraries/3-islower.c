#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _islower - controls if a character is in lowercase
 * @c: character to be verified
 * Return: return 0 or 1
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);

return (0);
}
