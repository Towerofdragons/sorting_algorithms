#include "sort.h"

/**
 * bubble_sort - implemented bubble sort algorithm
 * array: given array
 * size: size of given array
 *
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	int n;
	int i;
	int temp;
	int swapped;

	n = size - 1;
	swapped = 0;

	while(1)
	{

		for (i = 0; i < n; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = 1;
				print_array(array ,size); /*Print array per swap event*/
			}
		}
#if DEBUG
		print_array(array ,size); /*Print array per algorithm cycle*/
#endif

		if (swapped == 0)
			break;
		swapped = 0;

		n-=1;
	}

}
