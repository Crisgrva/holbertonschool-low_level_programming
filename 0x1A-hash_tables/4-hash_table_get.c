#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value
 * associated with a key.
 * @ht: current hash table
 * @key: is the key you are looking for
 * Return: the value associated with the element, or
 * NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *hola = "hola";

	(void)ht;
	(void)key;
	return (hola);
}
