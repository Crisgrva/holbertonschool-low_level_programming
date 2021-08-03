#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list_t list.
 * @h: value of the leng str.
 * Return: Always 0.
 */

size_t print_listint(const listint_t *h)
{
	size_t length;

	for (length = 0; h != NULL; length++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (length);
}
