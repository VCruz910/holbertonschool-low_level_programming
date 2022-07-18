#include "main.h"
/**
 * print_binary - Prints binary representation of
 *					a number.
 * @n: Number variable.
 **/
void print_binary(unsigned long int n)
{
	int Bin = 63, Counter = 0;
	unsigned long int Current;

	for (; Bin >= 0; Bin--)
	{
		Current = n >> Bin;
		if (Current & 1)
		{
			_putchar('1');
			Counter++;
		}
		else if (Counter)
		{
			_putchar('0');
		}
	}
	if (!Counter)
	{
		_putchar('0');
	}
}

