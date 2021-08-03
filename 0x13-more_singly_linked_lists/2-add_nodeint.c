#include "lists.h"

/**
 * add_nodeint - function that prints all the elements of a list_t list.
 * @head: head ref.
 * @n: value to insert.
 * Return: Always 0.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* 1. allocate node */
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	/* 2. put in the data  */
	new_node->n = n;

	/* 3. Make next of new node as head */
	new_node->next = (*head);

	/* 4. move the head to point to the new node */
	(*head) = new_node;

	return (new_node);
}
