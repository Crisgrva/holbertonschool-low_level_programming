#include "lists.h"

/**
 * free_listint2 - Write a function that frees a listint_t list.
 * @head: head ref.
 * Return: Always 0.
 */

void free_listint2(listint_t **head)
{
	listint_t *head_tmp;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		head_tmp = *head;
		*head = head_tmp->next;
		free(head_tmp);
	}
	head = NULL;
}
