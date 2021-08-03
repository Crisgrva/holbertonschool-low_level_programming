#include "lists.h"

/**
 * free_listint - Write a function that frees a listint_t list.
 * @head: head ref.
 * Return: Always 0.
 */

void free_listint(listint_t *head)
{
	listint_t *head_tmp;

	while (!head)
	{
		head_tmp = head;
		head = head->next;
		free(head_tmp);
	}
}
