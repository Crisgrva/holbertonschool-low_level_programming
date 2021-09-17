#include "lists.h"
/**
 * sum_dlistint - Write a function that returns the
 * sum of all the data (n) of a dlistint_t linked list.
 * @head: head reference
 * Return: sum of all elements in linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int len = 0, result = 0;

	if (head == NULL)
		return (0);

	for (len = 0; head != NULL; len++)
	{
		result += head->n;
		head = head->next;
	}

	return (result);
}
