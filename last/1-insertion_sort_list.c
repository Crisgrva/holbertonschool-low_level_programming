#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of ints in ascending order using Insertion sort algorithm
 * @list: doubly linked list to sort
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *fst = *list, *scnd = NULL;

	if (!(*list) || !(*list)->next)
		return;

	while (fst != NULL)
	{
		if (fst->prev != NULL && fst->n < fst->prev->n)
		{
			*list = swap_list(*list, fst, 1);
			scnd = fst;
			fst = fst->next;

			while (scnd->prev != NULL)
			{
				if (scnd->n < scnd->prev->n)
				{
					*list = swap_list(*list, scnd, 1);
					continue;
				}
				scnd = scnd->prev;
			}
		}
		fst = fst->next;
	}
}

/**
 * swap_list - Function to swap nodes
 * @list: list to print
 * @node: Node to swap at the following dir
 * @dir: Right is 0, Left is 1
 * Return: Current node
 */

listint_t *swap_list(listint_t *list, listint_t *node, int dir)
{
	listint_t *aux1 = NULL, *aux2 = NULL, *tmp = NULL;

	if (dir == 0)
	{
		aux2 = node;
		aux1 = aux2->next;
	}
	else
	{
		aux1 = node;
		aux2 = aux1->prev;
	}

	tmp = aux1->next;
	aux1->next = aux2;
	aux1->prev = aux2->prev;
	if (aux2->prev != NULL)
		aux2->prev->next = aux1;
	else
		list = aux1;
	aux2->next = tmp;
	aux2->prev = aux1;
	if (tmp != NULL)
		tmp->prev = aux2;

	print_list((const listint_t *) list);
	return (list);
}
