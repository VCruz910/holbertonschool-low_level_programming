#include "main.h"
/**
 * _calloc - Allocates memory for an array,
 *			using malloc.
 * @nmemb: Variable for the number of elements.
 * @size: Variable for size
 * Return: Point (Success), NULL (Failure)
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *Point;
	unsigned int CA;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	Point = malloc(nmemb * size);
	for (CA = 0; CA < (nmemb * size); CA++)
	{
		Point[CA] = 0;
	}
	return (Point);
}
