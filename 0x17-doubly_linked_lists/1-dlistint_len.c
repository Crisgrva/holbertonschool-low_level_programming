#include "lists.h"
/**
 * dlistint_len - function that returns the number of
 * elements in a linked
 * @h: head to start touring
 * Return: number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
