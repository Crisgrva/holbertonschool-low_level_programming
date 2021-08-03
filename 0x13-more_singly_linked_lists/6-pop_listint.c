#include "lists.h"

/**
 * pop_listint - Write a function that deletes the head node
 * of a listint_t linked list, and returns the head node’s data (n).
 * @head: head ref.
 * Return: Current->n.
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int num_pop;

	if (*head != NULL)
	{
		num_pop = (*head)->n;
		current = *head;

		(*head) = current->next;
		free(current);
		return (num_pop);
	}
	else
		return (0);
}
