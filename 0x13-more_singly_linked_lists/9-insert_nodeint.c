#include "lists.h"

/**
 * insert_nodeint_at_index - Write a function that inserts a
 * new node at a given position.
 * @head: head ref.
 * @idx: idex of new node
 * @n: new node's element
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *head_tmp = *head;
	listint_t *new_node;
	unsigned int count;

	for (count = 0; *head != NULL; count++)
	{
		if (idx == 0)
		{
			new_node = (listint_t *)malloc(sizeof(listint_t));

			new_node->n = n;
			new_node->next = (*head);

			(*head) = new_node;
			return (new_node);
		}
		if (count == idx - 1)
		{
			new_node = (listint_t *)malloc(sizeof(listint_t));

			current = (*head)->next;

			new_node->n = n;
			new_node->next = current;

			(*head)->next = new_node;
			*head = head_tmp;
			return (new_node);
		}
		*head = (*head)->next;
	}
	*head = head_tmp;
	return (NULL);
}
