#include "sort.h"

/**
 * swap - swaps two elements in array
 * @arr1: first element of array
 * @arr2: second element of array
 */

void swap(int *array, int i)
{

    int temp = array[i];

    array[i] = array[i + 1];
    array[i + 1] = temp;
}