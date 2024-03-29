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
