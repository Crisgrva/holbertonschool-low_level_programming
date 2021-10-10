#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element
 * to the hash table.
 * @ht: current hash table
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key.
 * value must be duplicated. value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	const unsigned char *new_key = (const unsigned char *)key;
	hash_node_t *tmp = NULL, *current_node = NULL;
	char *new_value = NULL;

	if (!ht || !value || !key)
		return (0);

	index = key_index(new_key, ht->size);

	tmp = ht->array[index];
	if (tmp == NULL)
	{
		current_node = hash_table_create_item(key, value);
		if (!current_node)
			return (0);
		current_node->next = ht->array[index];
		ht->array[index] = current_node;
		return (1);
	}
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (!new_value)
				return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	return (1);
}

/**
 * hash_table_create_item - create new node
 * @key: key is the key. key can not be an empty string
 * @value: is the value associated with the key.
 * value must be duplicated. value can be an empty string
 * Return: new node
 */

hash_node_t *hash_table_create_item(const char *key, const char *value)
{
	hash_node_t *new_item = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (strlen(key) == 0 || key == NULL || new_item == NULL)
		return (NULL);

	new_item->key = (char *)malloc(strlen(key) + 1);
	if (!new_item->key)
	{
		free(new_item->key);
		return (NULL);
	}

	new_item->value = (char *)malloc(strlen(value) + 1);
	if (!new_item->value)
	{
		free(new_item->value);
		return (NULL);
	}

	strcpy(new_item->key, key);
	strcpy(new_item->value, value);
	new_item->next = NULL;

	return (new_item);
}
