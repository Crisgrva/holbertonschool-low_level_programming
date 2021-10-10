#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: current hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0, tmp_last_idx = 0, last_idx = 0;

	if (ht == NULL)
		return;
	for (tmp_last_idx = 0; tmp_last_idx < ht->size; tmp_last_idx++)
	{
		if (ht->array[tmp_last_idx])
			last_idx = tmp_last_idx;
	}
	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx])
		{
			printf("'%s': '%s'", ht->array[idx]->key, ht->array[idx]->value);
			if (idx != last_idx)
				printf(", ");
		}
	}
	printf("}\n");
}
