#include "main.h"
/**
 * create_array - Creates an array of chars, and initializes
 *					it with a specific char.
 * @size: Unsigned integer for size.
 * @c: Character.
 * Return: ArrCreation (Success)
 **/
char *create_array(unsigned int size, char c)
{
	char *ArrCreation;
	unsigned int Arr;

	if (size == 0)
	{
		return (NULL);
	}
	ArrCreation = malloc(sizeof(c) * size);
	if (ArrCreation == NULL)
	{
		return (NULL);
	}
	for (Arr = 0; Arr < size; Arr++)
	{
		ArrCreation[Arr] = c;
	}
	return (ArrCreation);
}
