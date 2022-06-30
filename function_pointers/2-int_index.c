#include "function_pointers.h"
/**
 * int_index - Searches for a integer.
 * @array: Variable for array.
 * @size: Variable for array's size.
 * @cmp: Pointer variable for function cmp(int).
 * Return: -1.
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int S;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (S = 0; S < size; S++)
	{
		if (cmp(array[S]) != 0)
		{
			return (S);
		}
	}
	return (-1);
}

