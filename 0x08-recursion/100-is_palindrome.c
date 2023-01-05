#include "main.h"
#include <stdio.h>

/**
 * palind2 - obtains length of a
 * @a: string
 * @1: integer to count length
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int palind2(char *a, int 1)
{
	if (*a == 0)
		return (1 - 1);
	return (palind2(a + 1, 1 + 1));
}
/**
 * palind3 - obtains length of a
 * @a: sting
 * @1: integer to count length
 * Return: On success 1.
 */
int palind3(char *a, int 1)
{
	if (*a != *(a + 1))
		return (0);
	else if (*a == 0)
		return (1);
	return (palind3(a + 1, 1 - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int 1;

	1 = palind2(s, 0);
	return (palind3(s, 1));
}
