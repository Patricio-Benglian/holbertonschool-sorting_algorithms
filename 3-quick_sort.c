#include "sort.h"

/**
 * qSwap - swaps two elements in arrray
 * @arr1: first element to swap
 * @arr2: second element to swap
 */
void qSwap(int *arr1, int *arr2, int *array, size_t size)
{
	int temp = *arr1; /* Save value of first variable */
	if (arr1 != arr2) /* Dont bother if same */
	{
		*arr1 = *arr2;
		*arr2 = temp;
		print_array(array, size);
	}
}

/**
 * sorter - sorts partition of array
 * @array: array to sort
 * @start: start of partition
 * @end: end of partition
 * @size: size of array for printing entire array
 * Return: index value of pivot
 */
int sorter(int *array, int start, int end, size_t size)
{
	int pivot = array[end];
	int i = start;		/* Iterator through array */
	int pivInd = i - 1; /* Finds correct index for pivot*/

	/* Iterates only through partition segment */
	for (i = start; i < end; i++)
	{
		if (array[i] < pivot)
		{
			pivInd++;
			qSwap(&array[i], &array[pivInd], array, size);
		}
	}
	pivInd++;
	qSwap(&array[i], &array[pivInd], array, size);
	return (i);
}
/**
 * qsRecurse - recursively calls itself to sort partitions of array
 * @array: array to sort
 * @start: starting value of partition
 * @end: end value of partition
 * @size: value to pass to print entire array's size
 */
void qsRecurse(int *array, int start, int end, size_t size)
{
	size_t pivot; /* Marks division between two next partitions */

	/* If list is greater than 1 element */
	if (start < end)
	{
		pivot = sorter(array, start, end, size);
		/* Rerun with values before pivot's correct space */
		qsRecurse(array, start, pivot - 1, size);
		/* Rerun with values after pivot's correct space */
		qsRecurse(array, pivot + 1, end, size);
	}
}

/**
 * quick_sort - sorts array using the quick sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	(void)size;
	/* Call other func because var inputs needed */
	qsRecurse(array, 0, size - 1, size);
}
