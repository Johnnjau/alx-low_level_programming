#include "hash_tables.h"

/**
 * hash_djb2 - Hashes a string using the djb2 algorithm.
 * @str: The string to hash.
 * Return: The hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;
	return (hash);
}

/**
 * ht_get_key_index - Calculate the index at which a key-value
 * pair should be stored in a hash table.
 * @Key: The Key to get the index of.
 * @size: The size of the array of the hash table.
 * Return: The index of the key.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int ht_get_key_index(const unsigned char key, unsigned long
int size)
{
	unsigned long int hash_value = hash_djb2(const unsigned char key);
	unsigned long int index = hash_value % size;

	return (index);
}
