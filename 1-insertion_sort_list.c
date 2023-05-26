#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * @list: after each time you swap two elements (See example below)
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *cont;
	int n = 0;

	if (list == NULL)
		return;

	cont = *list;

	while (cont != NULL && cont->next != NULL)
	{
		if (cont->n > cont->next->n)
		{
			n = cont->n;


			*(int *)&cont->n = cont->next->n;

			*(int *)&cont->next->n = n;

			cont = *list;

			print_list(*list);
		}
		else
			cont = cont->next;
	}
}
