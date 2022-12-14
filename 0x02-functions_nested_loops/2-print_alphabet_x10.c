#include "main.h"
/**
 * print_alphabet_x10 - function to print abc 10 times
 *Description: Prints each on separate lines
 * Return: 0.
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

while (i < 10)
{
	ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	_putchar('\n');
	i++;
}
}
