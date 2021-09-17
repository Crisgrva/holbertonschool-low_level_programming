#include "lists.h"
/**
 * get_dnodeint_at_index - Write a function that returns
 * the nth node of a dlistint_t linked list.
 * @head: head of linked list
 * @index: index to print element
 * Return: current node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; head != NULL; count++, head = head->next)
		if (count == index)
			return (head);

	return (NULL);
}
