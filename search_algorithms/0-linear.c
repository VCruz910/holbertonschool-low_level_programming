#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of
 * integers using the Linear search algorithm.
 * @array: Pointer to the first element of the array
 * to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 * Return (-1)
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t I = 0;

	if (!array)
	{
		return (-1);
	}
	for (; I < size; I++)
	{
		printf("Value check array[%lu] = [%d]\n", I, array[I]);
		if (value == array[I])
		{
			return (I);
		}
	}
	return (-1);
}
