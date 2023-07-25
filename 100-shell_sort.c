#include "sort.h"

void swap_ints(int *a, int *b)
{
        int tmp;

        tmp = *b;
        *b = *a;
        *a = tmp;
}

void shell_sort(int *array, size_t size)
{
	size_t gap;
        size_t a;
       	size_t j;

	if (array == NULL || size < 2)
		return;

	gap = 1;
	while(gap < (size / 3))
		gap = gap * 3 + 1;

	for (; gap >= 1; gap = gap/3)
	{
		for (a = gap; a < size; a++)
		{
			j = a;

			while (j >= gap && array[j - gap] > array[j])
			{

				swap_ints(array + j, array + (j - gap));

				j = j - gap;
			}
		}

		print_array(array, size);
	}
}
