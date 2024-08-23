#include "sort.h"

/**
 * cocktail_sort_list - Sorts a doubly linked list of integers in ascending order
 *                      using the Cocktail shaker sort algorithm
 * @list: Pointer to the head of the doubly linked list
 */
void cocktail_sort_list(listint_t **list)
{
    int swapped = 1;
    listint_t *start = NULL;
    listint_t *end = NULL;
    listint_t *current = NULL;

    if (list == NULL || *list == NULL)
        return;

    while (swapped) {
        swapped = 0;
        current = start = *list;

        while (current->next != end) {
            if (current->n > current->next->n) {
                if (current->prev)
                    current->prev->next = current->next;
                else
                    start = current->next;

                if (current->next->next)
                    current->next->next->prev = current;

                current->prev = current->next;
                current->next = current->next->next;
                current->prev->next = current;

                swapped = 1;
                print_list(*list);
            } else {
                current = current->next;
            }
        }

        if (!swapped)
            break;

        end = current;

        while (current->prev != start) {
            if (current->n < current->prev->n) {
                if (current->next)
                    current->next->prev = current->prev;
                current->prev->next = current->next;

                if (current->prev->prev)
                    current->prev->prev->next = current;

                current->next = current->prev;
                current->prev = current->prev->prev;
                current->next->prev = current;

                swapped = 1;
                print_list(*list);
            } else {
                current = current->prev;
            }
        }

        start = current;
    }

    *list = start;
}
