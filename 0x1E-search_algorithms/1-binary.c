#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* binary_search - function to find value using Binary Search algorithm
* @array: pointer to array
* @size: size of array
* @value: value to be searched for
* Return: value or -1 on failure
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid, i;

	if (array == NULL || size == 0)
		return (-1);
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		left = mid + 1;
	else
		right = mid - 1;
	}
return (-1);
}
