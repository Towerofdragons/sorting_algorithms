#include "sort.h"

/**
 * selection_sort - sort array (ascending order) using selection sort.
 * @array: provided array
 * @size: size of provided array
 *
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t idx;
	size_t i;
	int temp;
	size_t smallest_idx;

	if (size < 2)
	{
		return;
	}
	for (idx = 0; idx < size - 1; idx ++)
	{
		smallest_idx = idx;
		for (i = idx; i < size; i++)
		{
			if (array[smallest_idx] > array[i])
			{
				smallest_idx = i;
			}
		}

		temp = array[idx];
		array[idx] = array[smallest_idx];
		array[smallest_idx] = temp;
		print_array(array, size);

	}
}
