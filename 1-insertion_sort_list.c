#include "sort.h"

/**
 * insertNode - inserts node in right spot
 * @b4: node before node to insert
 * @node: node to insert
 */
void insertNode(listint_t *b4, listint_t *node)
{
    node->prev->next = node->next;
    node->next->prev = node->prev;
    node->next = b4->next;
    node->prev = b4;
    b4->next->prev = node;
    b4->next = node;
}

/**
 * insertion_sort_list - sorts linked list using insertion sort
 * @list: list to sort
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *b4 = NULL;

    while ((*list)->next)
    {
        b4 = (*list)->prev;
        if ((*list)->next->n < (*list)->n)
        {
            while (b4->prev && b4->n < (*list)->next->n)
            {
                printf("P\n");
                b4 = b4->prev;
            }
            insertNode(b4, *list);
            print_list(*list);
        }
        (*list) = (*list)->next;
    }
}
