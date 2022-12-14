#include "main.h"
/**
 * print_alphabet_x10 - function to print abc 10 times
 *Description: Prints each on separate lines
 * Return: 0.
 */
void print_alphabet_x10(void)
{
	int ch; 
	int j;

for (j = '1'; j <= '10'; j++)
{
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
}
_putchar('\n');
}
