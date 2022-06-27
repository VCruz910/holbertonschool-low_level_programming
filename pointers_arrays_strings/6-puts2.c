#include "main.h"
/**
 * puts2 - Prints every other character of a string,
 *			starting with the first character,
 *			followed by a new line.
 *
 * @str: Variable for string.
 **/
void puts2(char *str)
{
	int StrCount2;

	StrCount2 = 0;
	while (StrCount2 >= 0)
	{
		if (str[StrCount2] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (StrCount2 % 2 == 0)
		{
			_putchar(str[StrCount2]);
		}
		StrCount2++;
	}
}
