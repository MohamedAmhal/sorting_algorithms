#include "sort.h"

/**
 * selection_sort - this is the function that sort the array
 * @array: this is the array data structure
 * @size: the size of the array
 * Return: nothing (void function)
 */

void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int tmp;
	int z;
	size_t min;

	if (array == NULL || size < 2)
	{
	return;
	}

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		z = array[i];
	for (j = i; j < size; j++)
	{
	if (z > array[j])
	{
		min = j;
		z = array[j];
	}
	}
	if (min != i)
	{
	tmp = array[i];
	array[i] = array[min];
	array[min] = tmp;
	print_array(array, size);
	}
	}

}
