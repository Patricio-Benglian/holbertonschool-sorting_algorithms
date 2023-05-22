#include "sort.h"

/**
 * selection_sort - sorts array using selection sort method
 * @array: array to sort
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t a, b; /* Iterators */
	size_t min;	 /* Index of smallest value */
	int temp;

	if (!array || size < 2)
		return;

	for (a = 0; a < size; a++)
	{
		min = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[b] < array[min])
				min = b; /* Save index of smallest value */
		}
		if (array[min] != array[a])
		{
			temp = array[a];
			array[a] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
