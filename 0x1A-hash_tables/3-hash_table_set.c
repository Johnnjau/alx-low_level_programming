#include "hash_tables.h"
/**
 *
 *
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 * Return: Upon failure - 0.
 * 	   Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current_node;
	char *value_copy;
	unsigned long int index;

	if (!ht || !key || !value || !*key)
		return (0);

	value_copy = strdup(value);
	if (!value_copy)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
		    free(current_node->value;
		    current_node->value = value_copy;
		    free(value_copy);
		    return (1);
		}
		current_node = current _node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
	   free(value_copy);
	   return (0);
	}

	new_node->key = strdup(key);
	if (!new_node->key)
	{
	     free(new_node);
	     free(value_copy);
	     return (0);
	}

	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
