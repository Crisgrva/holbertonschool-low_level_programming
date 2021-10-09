#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: hash table's size
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int each_node = 0;
	hash_table_t *new_table = NULL;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;

	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table->array);
		return (NULL);
	}

	for (each_node = 0; each_node < size; each_node++)
	{
		new_table->array[each_node] = NULL;
	}

	return (new_table);
}
