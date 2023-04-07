#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Node of a hash table
 * @key: The Key, string
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 * @size: The size of the array
 * @array: An array of size @size of pointers to hash nodes
 */

typedef struct hash_tables_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 * Return: A pointer to the new hash table, or NULL if it fails
 */

hash_table_t *hash_table_create(unsigned long int size);

/**
 * hash_djb2 - Hashes a string using the djb2 algorithm
 * @str: The string to hash
 * Return: The hash value of the string
 */

unsigned long int hash_djb2(const unsigned char *str);

/**
 * Key_index - Retrieves the index of a key in the hash table
 * @key: The key to look for
 * @size: The size of the array of the hash table
 * Return: The index of the key in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size);

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to add or update the key/value to/in
 * @key: The key to add or update
 * @value: The value to add or update the
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value);

/**
 * hash_table_get - Retrieves a value associated with a key in a hash table
 * @ht: The hash table to look into
 * @key: The key to look for
 * Return: The value associated with the key, or NULL if the key is not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key);

/**
 * hash_table_print - Prints the content of a hash table
 * @ht: The hash table to print
 */

void hash_table_print(const hash_table_t *ht);

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 */

void hash_table_delete(hash_table_t *ht);

#endif /* HASH_TABLE_H */
