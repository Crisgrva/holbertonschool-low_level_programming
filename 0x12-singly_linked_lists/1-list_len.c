#include "lists.h"

/**
 * list_len - function that prints all the elements of a list_t list.
 * @h: value of the leng str.
 * Return: Always 0.
 */

size_t list_len(const list_t *h)
{
	size_t length;

	for (length = 0; h != NULL; length++)
	{
		h = h->next;
	}
	return (length);
}
