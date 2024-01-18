#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * print_array - this function is to print a array
 * @array: this is the array we will print
 * @size: the size of the array
 */

void print_array(int *array, size_t size)
{

	for (int i = 0; i < size; i++)
	{
	if (i == size - 1)
	{
		printf("%d \n", array[i]);
	}
	else
	{
		printf("%d, ", array[i]);
	}
	}
}

/**
 * bubble_sort - this is the function that sort the array
 * @array: this is the array we will sort
 * @size: the size if the array
 */

void bubble_sort(int *array, size_t size)
{
	int tmp;
	int a = 0;

	while (a == 0)
	{
	for (int i = 0; i < size - 1; i++)
	{
	if (array[i] > array[i + 1])
	{
		tmp = array[i];
		array[i] = array[i + 1];
		array[i + 1] = tmp;
		print_array(array, size);
	}
	}
	int r = 0;

	for (int j = 0; j < size - 1; j++)
	{
	if (array[j] > array[j + 1])
	{
		r++;
	}
	}
	if (r == 0)
	{
	a = 1;
	}
	}
}
