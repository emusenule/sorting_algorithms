#include "sort.h"

void print_array(const int *array, size_t size)
{
    if (array == NULL)
        return;

    for (size_t i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("\n");
}
