#include "sort.h"
#include "swap.c"

/**
 * bubble_sort - sorts array
 * @array: array to sort
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
    size_t i;          /* Iterator */
    bool unsorted = 1; /* Checks if array remains unsorted */

    while (unsorted != 0)
    {
        unsorted = 0;
        for (i = 0; i < size; i++)
            if (i < size - 1 && array[i] > array[i + 1])
            {
                swap(array, i);
                unsorted = 1;
                print_array(array, size);
            }
    }
}