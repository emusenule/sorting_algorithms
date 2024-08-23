#ifndef SORT_H
#define SORT_H


#include <stddef.h>

/* Function to print an array */
void print_array(const int *array, size_t size);

/* Bubble Sort */
void bubble_sort(int *array, size_t size);

/* Insertion Sort */
void insertion_sort_list(int *array, size_t size);

/* Selection Sort */
void selection_sort(int *array, size_t size);

/* Quick Sort */
void quick_sort(int *array, size_t size);

/* Shell Sort */
void shell_sort(int *array, size_t size);

/* Cocktail Sort */
void cocktail_sort_list(int *array, size_t size);

/* Counting Sort */
void counting_sort(int *array, size_t size);

/* Merge Sort */
void merge_sort(int *array, size_t size);

/* Heap Sort */
void heap_sort(int *array, size_t size);

/* Radix Sort */
void radix_sort(int *array, size_t size);

/* Bitonic Sort */
void bitonic_sort(int *array, size_t size);

/* Quick Sort (Hoare Partition) */
void quick_sort_hoare(int *array, size_t size);

#endif /* SORT_H */
