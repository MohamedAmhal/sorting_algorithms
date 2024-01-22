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

	if (array == NULL || size < 2)
	{
	return;
	}

	for (i = 0; i < size; i++)
	{
	for (j = i; j < size; j++)
	{
	if (array[i] > array[j])
	{
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
		print_array(array, size);
	}
	}
	}

}
