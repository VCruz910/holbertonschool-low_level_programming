#include "function_pointers.h"
/**
 * array_iterator - Gives a parameter on each element of an array.
 * @array: Variable for array.
 * @size: Variable for array's size.
 * @action: Pointer for function action(int)
 * Return: Nothing.
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int It;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (It = 0; It < size; It++)
	{
		action(array[It]);
	}
}
