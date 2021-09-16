#include "lists.h"
/**
 * print_dlistint - print all elements in linked list
 * @h: head to start touring linked list
 * Return: count of nodes in linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	for (i = 0; h != NULL; i++)
	{
		if (h->n)
			printf("%d\n", h->n);
		else
			printf("%d\n", 0);
		h = h->next;
	}
	return (i);
}
