#include "main.h"
/**
 * print_line - Draws a straight line in the terminal.
 *
 * @n: Variable for line.
 **/
void print_line(int n)
{
	int Line;

	for (Line = 0; Line < n; Line++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
