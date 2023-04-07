#ifndef HASH_TABLE_H
#define HASH_TABLES_H

#include <stdio.h>
#include "main.h"
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @table_size: The size of the hash table.
 * Return: If an error occurs - NULL.
 * Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int table_size)
{
	hash_table_t *hash_table;
	unsigned long int index;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = table_size;
	hash_table->array = malloc(sizeof(hash_node_t *) * table_size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	/* Initialize each element of the array to NULL */
	for (index = 0; index < table_size; index++)
		hash_table->array[index] = NULL;

	return (hash_table);
}
