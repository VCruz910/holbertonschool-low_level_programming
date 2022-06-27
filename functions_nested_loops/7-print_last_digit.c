#include "main.h"
/**
  * print_last_digit - Prints the last digit.
  *
  * @Num: Variable of number.
  *
  * Return: Always 1 (Success)
  **/
int print_last_digit(int Num)
{
	int LD;

	LD = Num % 10;
	if (Num < 0)
	{
		Num = -Num;
	}
	if (LD < 0)
	{
		LD = -LD;
	}
	_putchar(LD + '0');
	return (LD);
}
