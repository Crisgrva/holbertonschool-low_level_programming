#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at
 * the beginning of a dlistint_t list.
 * @head: list's head
 * @n: value to new node
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	if(head == NULL)
		return (NULL);

	/* Allocate node */
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	/* Put data in new node */
	new_node->n = n;
	new_node->next = (*head);
	new_node->prev = NULL;

	/* Move the head to point to new node */
	(*head) = new_node;

	return (new_node);
}
