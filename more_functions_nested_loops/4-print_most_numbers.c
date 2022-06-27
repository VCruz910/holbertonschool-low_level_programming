#include "main.h"
/**
 * print_most_numbers - Prints numbers, from 0 to 9,
 *						followed by a new line.
 **/
void print_most_numbers(void)
{
	int Num;

	for (Num = 48; Num <= 57; Num++)
	{
		if (Num != '2' && Num != '4')
		{
			_putchar(Num);
		}
	}
	_putchar('\n');
}
