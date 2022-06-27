#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers,
 *				from 0 to 14, followed by a new line.
 **/
void more_numbers(void)
{
	int Num, Times;

	for (Times = 0; Times < 10; Times++)
	{
		for (Num = 0; Num < 15; Num++)
		{
			if (Num >= 10)
			{
				_putchar((Num / 10) + 48);
			}
			_putchar((Num % 10) + 48);
		}
		_putchar('\n');
	}
}
