#include "lists.h"
#include <stdio.h>
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head node of the list
 * @index: index of the node to be returned
 *
 * Return: pointer to the nth node, or NULL if the node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int i = 0;

	while (current_node != NULL && i < index)
	{
	current_node = current_node->next;
	i++;
	}

	return (current_node);
}
