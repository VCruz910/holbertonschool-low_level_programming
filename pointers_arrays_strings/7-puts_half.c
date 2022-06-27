#include "main.h"
/**
 * puts_half - Prints half of a string, followed by a new line.
 *
 * @str: Variable for string.
 **/
void puts_half(char *str)
{
	int StrCounter, HString;

	StrCounter = 0;
	while (StrCounter >= 0)
	{
		if (str[StrCounter] == '\0')
		{
			break;
		}
		StrCounter++;
	}
	if (StrCounter % 2 == 1)
	{
		HString = StrCounter / 2;
	}
	else
	{
		HString = (StrCounter - 1) / 2;
	}
	for (HString++; HString < StrCounter; HString++)
	{
		_putchar(str[HString]);
	}
	_putchar('\n');
}
