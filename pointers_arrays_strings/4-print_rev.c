#include "main.h"
/**
 * print_rev - Prints a string in reversed,
 *				followed by a new line.
 *
 * @s: Variable for the reverse string.
 **/
void print_rev(char *s)
{
	int tnirp = 0;

	while (tnirp >= 0)
	{
		if (s[tnirp] == '\0')
		{
			break;
		}
		tnirp++;
	}
	for (tnirp--; tnirp >= 0; tnirp--)
	{
		_putchar(s[tnirp]);
	}
	_putchar('\n');
}
