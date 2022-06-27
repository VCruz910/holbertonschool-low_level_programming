#include "main.h"
/**
 * print_times_table - Prints the n times table,
 *	starting with 0.
 *
 * @n: Variable for number.
 **/
void print_times_table(int n)
{
	int X, Y, Z;

	if (n >= 0 && n <= 14)
	{
		for (X = 0; X <= n; X++)
		{
			for (Y = 0; Y <= n; Y++)
			{
				Z = X * Y;
				if (Z > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((Z / 100) + '0');
					_putchar(((Z / 10) % 10) + '0');
					_putchar((Z % 10) + '0');
				}
				else if (Z > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((Z / 10) % 10) + '0');
					_putchar((Z % 10) + '0');
				}
				else
				{
					if (Y != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(Z + '0');
				}
			}
			_putchar('\n');
		}
	}
}
