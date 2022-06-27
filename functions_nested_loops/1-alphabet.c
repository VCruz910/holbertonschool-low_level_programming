#include "main.h"
/**
  *print_alphabet - Prints the alphabet in lowercase
  *		followed by a new line using _putchar
  *
  *Return: Always 0 (Success)
  **/
void print_alphabet(void)
{
	int AZ;

	for (AZ = 97; AZ <= 122; AZ++)
	{
		_putchar(AZ);
	}
	_putchar('\n');
}
