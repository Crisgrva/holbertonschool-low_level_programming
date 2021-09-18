#include "lists.h"
/**
 * insert_dnodeint_at_index - Write a function that
 * inserts a new node at a given position.
 * @h: head reference
 * @idx: index of new node
 * @n: new node's element
 * Return: new_node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *h_tmp = *h;
	dlistint_t *new_node;
	unsigned int count;

	if ((*h) == NULL)
		return (NULL);

	for (count = 0; *h != NULL; count++)
	{
		if (idx == 0)
		{
			new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
			if (*h != NULL)
			{
				new_node->next = aux;
				aux->prev = new_node;
			}
			else
				new_node->next;
			new_node->n = n;
			new_node->next = (*h);
			new_node->prev = NULL;

			    (*h) = new_node;
			return (new_node);
		}
		if (count == idx - 1)
		{
			new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);

			current = (*h)->next;

			new_node->n = n;
			new_node->next = current;

			(*h)->next = new_node;
			*h = h_tmp;
			return (new_node);
		}
		*h = (*h)->next;
	}
	*h = h_tmp;
	return (NULL);
}
