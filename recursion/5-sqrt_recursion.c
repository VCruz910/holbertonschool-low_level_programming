#include "main.h"

int square_root_(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n Variable for square root calculation.
 * Return: -1 (unsuccessful).
 **/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square_root_(n, 0));
}
/**
 * square_root_ - Calculates the square root.
 * @n: Variable for square root.
 * @i: Variable for iterator
 * Return: (square_root_(n, i +1).
 **/
int square_root_(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (square_root_(n, i + 1));
	}
}
