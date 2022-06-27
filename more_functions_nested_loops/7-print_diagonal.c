#include "main.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal.
 *
 * @n: Variable for the diagonal line.
 **/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int DLine, Blank;

		for (DLine = 0; DLine < n; DLine++)
		{
			for (Blank = 0; Blank < n; Blank++)
			{
				if (Blank == DLine)
				{
					_putchar('\\');
				}
				else if (Blank < DLine)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
