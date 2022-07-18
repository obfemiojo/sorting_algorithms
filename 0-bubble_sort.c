#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - function
 * @array: the array of integer
 * @size: the len of array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, k;
	int tmp;

	while (i < size)
	{
		for (k = 0; k < size - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				tmp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = tmp;
				print_array(array, size);
			}
		}
		i++;
	}
}
