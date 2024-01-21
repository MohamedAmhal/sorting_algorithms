#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "sort.h"

/**
 * bubble_sort - this is the function that sort the array
 * @array: this is the array we will sort
 * @size: the size if the array
 */

void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i;
	size_t j;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
	for (j = 0; j < size - 1 - i; j++)
	{
	if (array[j] > array[j + 1])
	{
		tmp = array[j];
		array[j] = array[j + 1];
		array[j + 1] = tmp;
		print_array(array, size);
	}
	}
	}
}
