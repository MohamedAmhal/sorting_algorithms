#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * print_array - this function is to print a array
 * @array: this is the array we will print
 * @size: the size of the array
 */

void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
	if (i > 0)
	printf(", ");
	printf("%d", array[i]);
	++i;
	}
	printf("\n");
}
/**
 * bubble_sort - this is the function that sort the array
 * @array: this is the array we will sort
 * @size: the size if the array
 */

void bubble_sort(int *array, size_t size)
{
	int tmp;

	for (int i = 0; i < size - 1; i++)
	{
	for (int j = 0; j < size - 1 - i; j++)
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
