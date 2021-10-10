#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int item = 0;
	hash_node_t *tmp = NULL;

	for (item = 0; item < ht->size; item++)
	{
		while (ht->array[item])
		{
			tmp = ht->array[item]->next;
			free_node(ht->array[item]);
			ht->array[item] = tmp;
		}
	}
	free(ht->array);
	ht->array = NULL;
	free(ht);
}
/**
 * free_node - function to free a node
 * @node: node to free
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
