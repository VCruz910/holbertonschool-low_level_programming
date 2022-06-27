#include "main.h"
/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: Variable for width
 * @height: Variable for height.
 * Return: ArrGrid (Success), NULL (Failure)
 **/
int **alloc_grid(int width, int height)
{
	int **ArrGrid;
	int AG1, AG2;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	ArrGrid = malloc(height * sizeof(int *));

	if (ArrGrid == NULL)
	{
		return (NULL);
	}

	for (AG1 = 0; AG1 < height; AG1++)
	{
		ArrGrid[AG1] = malloc(width * sizeof(int));
		if (ArrGrid[AG1] == NULL)
		{
			for (AG1--; AG1 >= 0; AG1--)
			{
				free(ArrGrid[AG1]);
			}
			free(ArrGrid);
			return (NULL);
		}
	}

	for (AG1 = 0; AG1 < height; AG1++)
	{
		for (AG2 = 0; AG2 < width; AG2++)
		{
			ArrGrid[AG1][AG2] = 0;
		}
	}
	return (ArrGrid);
}
