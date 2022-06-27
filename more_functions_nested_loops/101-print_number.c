#include "main.h"
/**
 * print_number - Prints an Integer.
 *
 * @n: Variable for Integer.
 **/
void print_number(int n)
{
	unsigned int MTG, DD, Counter;

	if (n < 0)
	{
		_putchar(45);
		MTG = n * -1;
	}
	else
	{
		MTG = n;
	}

	DD = MTG;
	Counter = 1;

	while (DD > 9)
	{
		DD /= 10;
		Counter *= 10;
	}
	for (; Counter >= 1; Counter /= 10)
	{
		_putchar(((MTG / Counter) % 10) + 48);
	}
}
