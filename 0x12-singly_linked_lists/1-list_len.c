#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list_t list.
 * @h: value of the leng str.
 * Return: lenght of linked list
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
