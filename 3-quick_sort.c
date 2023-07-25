#include "sort.h"

int l_partition(int *array, size_t size, int left, int right)
{
	int *pivot;
        int above;
	int below;

	pivot = array + right;

	for (above = below = left; below < right; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap_ints(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		swap_ints(array + above, pivot);
		print_array(array, size);
	}

	return (above);
}

void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}



void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	l_sort(array, size, 0, size-1);
}


/*lomuto sort*/
void l_sort(int *array, size_t size, int left, int right)
{
	int p;

	if (right - left > 0)
	{
		p = l_partition(array, size, left, right);
		l_sort(array, size, left, p - 1);
		l_sort(array, size, p + 1, right);
	}
}

