#include "main.h"
/**
 * print_triangle - Prints a triangle followed by a new line.
 *
 * @size: Variable for the Triangle
 **/
void print_triangle(int size)
{
	int Shape, Blocks;

	for (Shape = 0; Shape < size; Shape++)
	{
		for (Blocks = 1; Blocks < (size - Shape); Blocks++)
		{
			_putchar(' ');
		}
		for (Blocks--; Blocks < size; Blocks++)
		{
			_putchar('#');
		}
		if (Shape < (size - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
