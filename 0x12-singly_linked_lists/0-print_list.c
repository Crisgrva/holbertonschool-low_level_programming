#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: value of the leng str.
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
	size_t length;

	for (length = 0; h != NULL; length++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%i %s\n", h->len, h->str);
		h = h->next;
	}
	return (length);
}
