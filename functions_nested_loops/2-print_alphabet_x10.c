#include "main.h"
/**
  * print_alphabet_x10 - Prints the alphabet
  *			 10 times in lowercase
  *
  * Return: Always 0 (Success)
  **/
void print_alphabet_x10(void)
{
	int Times, AZ;

	for (Times = 0; Times < 10; Times++)
	{
		for (AZ = 97; AZ <= 122; AZ++)
		{
			_putchar(AZ);
		}
		_putchar('\n');
	}
}
