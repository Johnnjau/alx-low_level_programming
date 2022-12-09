#include <stdio.h>
/**
 * main - print out sizes of data types in C
 * Code by Johnnjau
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
