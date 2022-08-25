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

	if (!array || size == 0)
	{
		return (-1);
	}
	while (I < size)
	{
		printf("Value check array[%lu] = [%d]\n", I, array[I]);
		if (array[I] == value)
		{
			return (I);
		}
		I++;
	}
	return (-1);
}
