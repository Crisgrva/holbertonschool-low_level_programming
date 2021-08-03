#include "lists.h"

/**
 * listint_len - function that prints number of elements in listint_t.
 * @h: value of the leng str.
 * Return: Always 0.
 */

size_t listint_len(const listint_t *h)
{
	size_t length;

	for (length = 0; h != NULL; length++)
		h = h->next;
	return (length);
}
