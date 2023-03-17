#include "lists.h"
#include <stdio.h>
/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list
 * @head: pointer to the head node of the list
 *
 * Return: sum of all the data in the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current_node = head;

	while (current_node != NULL)
	{
	sum += current_node->n;
	current_node = current_node->next;
	}

	return (sum);
}
