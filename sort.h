#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/* Define the listint_t structure */
typedef struct listint_s {
    int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* Function prototypes */
void cocktail_sort_list(listint_t **list);
void print_list(const listint_t *list);

#endif /* SORT_H */
