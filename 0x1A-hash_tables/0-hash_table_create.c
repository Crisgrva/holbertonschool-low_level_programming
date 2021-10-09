#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: hash table's size
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int each_item = 0;
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (!table)
	{
		free(table);
		return (NULL);
	}

	table->size = size;

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
	{
		free(table->array);
		return (NULL);
	}

	for (each_item = 0; each_item < table->size; each_item++)
		table->array[each_item] = NULL;

	return (table);
}
