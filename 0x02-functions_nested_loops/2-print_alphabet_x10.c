#include "main.h"
/**
 * print_alphabet_x10 - function to print abc 10 times
 *Description: Prints each on separate lines
 * Return: 0.
 */
void print_alphabet_x10(void)
{
	int n, ch;

while (ch < 10)
{
for (n = 'a'; n <= 'z'; n++)
_putchar(n);
}
ch++;
_putchar('\n');
}
