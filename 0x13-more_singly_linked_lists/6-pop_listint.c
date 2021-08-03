#include "lists.h"

/**
 * pop_listint - Write a function that frees a listint_t list.
 * @head: head ref.
 * Return: Current->n.
 */

int pop_listint(listint_t **head)
{
	listint_t *current = *head;

	(*head) = current->next;
	free(current);
	return (current->n);
}
