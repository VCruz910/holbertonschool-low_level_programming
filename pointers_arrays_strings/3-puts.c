#include "main.h"
/**
 * _puts - Prints a string, followed by a new line,
 *			to stdout.
 *
 * @str: String variable for printing.
 *
 **/
void _puts(char *str)
{
	int StrCount;

	StrCount = 0;
	while (StrCount >= 0)
	{
		if (str[StrCount] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[StrCount]);
		StrCount++;
	}
}
