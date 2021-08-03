#include "lists.h"

/**
 * free_listint2 - Write a function that frees a listint_t list.
 * @head: head ref.
 * Return: Always 0.
 */

void free_listint2(listint_t **head)
{
	listint_t *head_tmp = NULL;

	while (head_tmp != NULL)
	{
		head_tmp = *head;
		head_tmp = head_tmp->next;
		free(head_tmp);
	}
}
