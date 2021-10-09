#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: hash table's size
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;

	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
