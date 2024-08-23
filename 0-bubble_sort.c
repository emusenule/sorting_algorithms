#include <stdio.h>

/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble Sort
 * @array: Array of integers to be sorted
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int tmp;
    int swapped;

    for (i = 0; i < size - 1; i++)
    {
        swapped = 0;

        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                swapped = 1;
            }
        }

        if (swapped == 0)
            break;
    }

    // Time complexity details
    printf("Time Complexity:\n");
    printf("Best case: O(n)\n");
    printf("Average case: O(n^2)\n");
    printf("Worst case: O(n^2)\n");
}
