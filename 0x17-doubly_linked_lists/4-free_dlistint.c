#include "lists.h"
#include <stdio.h>
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head node of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;

	while (head != NULL)
	{
	current_node = head;
	head = head->next;
	free(current_node);
	}
}
