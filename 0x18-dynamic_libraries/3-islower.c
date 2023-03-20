#include <stdio.h>
/**
 *_islower - a function that checks for lowercase character
 *@c: single letter input@c: single letter input
 * Return: 1 if char is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
