#include "main.h"
/**
 * print_diagsums - Prints the sum of two diagonals of
 *					a square matrix of integers.
 * @a: Array for Square Matrix.
 * @size: Variable for Matrix Size.
 **/
void print_diagsums(int *a, int size)
{
	int I;
	unsigned int Sum1, Sum2;

	Sum1 = 0;
	Sum2 = 0;

	for (I = 0; I < size; I++)
	{
		Sum1 += a[(size * I) + I];
		Sum2 += a[(size * (I + 1)) - (I + 1)];
	}

	printf("%d, %d\n", Sum1, Sum2);
}
