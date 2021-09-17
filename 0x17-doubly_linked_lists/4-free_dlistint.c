#include "lists.h"
/**
 * free_dlistint - Write a function that frees a dlistint_t list.
 * @head: head of linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *head_tmp;

	while (head != NULL)
	{
		head_tmp = head;
		head = head->next;
		free(head_tmp);
	}
}
