#ifndef HASH_TABLE_H
#define HASH_TABLES_H

#include <stdio.h>
#include "hash_tables.h"

/**
 * File: 1-djb2.c
 * Auth: ChatGPT
 */

#include "hash_tables.h"

/**
 * hash_djb2 - Implementation of the djb2 hash function algorithm.
 * @str: The string to hash.
 * Return: The calculated hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{	
	unsigned long int hash_value = 5381;
	int current_char;

	while ((current_char = *str++)) {
		hash_value = ((hash_value << 5) + hash_value) + current_char; // hash * 33
}

	return (hash_value);
}
