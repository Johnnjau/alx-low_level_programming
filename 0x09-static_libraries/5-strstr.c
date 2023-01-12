#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 *strstr - a function that locates a substring
 *_strstr - a function that locates a substring
 *@haystack: the string to search substring
 *@needle: the set max number of characters the function should return
 *Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptr_result = strstr(haystack, needle);

	return (ptr_result);
}
