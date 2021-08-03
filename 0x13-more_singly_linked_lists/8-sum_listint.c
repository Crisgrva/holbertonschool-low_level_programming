#include "lists.h"

/**
 * sum_listint - Write a function that returns
 * the sum of all the data (n) of a listint_t linked list.
 * @head: head ref.
 * Return: sum of all elements in head->n
 */

int sum_listint(listint_t *head)
{
	size_t length;
	int sum = 0;

	if (head == NULL)
		return (0);

	for (length = 0; head != NULL; length++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
