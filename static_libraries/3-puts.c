#include "main.h"
void _puts(char *s);

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
