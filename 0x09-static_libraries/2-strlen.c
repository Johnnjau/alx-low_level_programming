#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: returns length;
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (len);
return (inc);
}
