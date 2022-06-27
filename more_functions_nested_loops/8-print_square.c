#include "main.h"
/**
 * print_square - Print a square, followed by a new line.
 *
 * @size: Variable for size of the square.
 **/
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int Shape, Blocks;

		for (Shape = 0; Shape < size; Shape++)
		{
			for (Blocks = 0; Blocks < size; Blocks++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
