#include "main.h"
/**
 * print_array - Prints n elements of an array of integers,
 *				 followed by a new line.
 *
 * @a: Input variable for Array.
 *
 * @n: Input variable for n elements
 **/
void print_array(int *a, int n)
{
	int Array;

	for (Array = 0; Array < n; Array++)
	{
		printf("%d", *(a + Array));
		if (Array != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
