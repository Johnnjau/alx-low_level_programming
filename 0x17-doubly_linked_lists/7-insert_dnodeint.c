#include "lists.h"
#include <stdio.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to the head of the list.
 * @idx: index of the list where the new node should be added.
 * @n: data for the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp = *h;
	unsigned int i = 0;

	if (idx == 0)
	return (add_dnodeint(h, n));

	while (i < idx - 1)
	{
	if (tmp == NULL)
	return (NULL);
	tmp = tmp->next;
	i++;
	}

	if (tmp == NULL)
	return (NULL);

	if (tmp->next == NULL)
	return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->prev = tmp;
	new_node->next = tmp->next;
	tmp->next->prev = new_node;
	tmp->next = new_node;

	return (new_node);
}
