#include "main.h"
/**
 * array_range - Creates an array of integers
 * @min: Variable for minimum value.
 * @max: Variable for max value.
 * Return: ArrINT (Success), NULL (Failure)
 **/
int *array_range(int min, int max)
{
	int *ArrINT;
	int V;

	if (min > max)
	{
		return (NULL);
	}

	ArrINT = malloc(sizeof(*ArrINT) * ((max - min) + 1));

	if (ArrINT == NULL)
	{
		return (NULL);
	}
	for (V = 0; min <= max; V++, min++)
	{
		ArrINT[V] = min;
	}
	return (ArrINT);
}

