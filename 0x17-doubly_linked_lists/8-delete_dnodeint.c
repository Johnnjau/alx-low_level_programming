#include "lists.h"
#include <stdio.h>
/**
 * delete_dnodeint_at_index - Deletes the node at index
 * index of a dlistint_t linked list.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *temp;
	unsigned int i = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	if (*head)
		(*head)->prev = NULL;
	free(current);
	return (1);
	}

	while (i < index && current)
	{
	current = current->next;
	i++;
	}

	if (i < index || current == NULL)
	return (-1);

	temp = current->prev;
	temp->next = current->next;

	if (current->next)
		current->next->prev = temp;

	free(current);
	return (1);
}
