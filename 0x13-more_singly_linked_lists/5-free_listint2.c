#include "lists.h"

/**
 * free_listint2 - Write a function that frees a listint_t list.
 * @head: head ref.
 * Return: Always 0.
 */

void free_listint2(listint_t **head)
{
	listint_t *head_tmp = *head;

	while (head_tmp != NULL)
	{
		free(head_tmp);
		head_tmp = head_tmp->next;
	}
}
