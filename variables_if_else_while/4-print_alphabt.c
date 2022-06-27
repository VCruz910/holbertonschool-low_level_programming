#include <stdio.h>
/**
 *main - Prints the alphabet in
 *	 lowercase except for "q"
 *	 and "e", followed by a
 *	 new line.
 *
 *Return: Always 0 (Success)
 **/
int main(void)
{
	char CH = 'a';

	while (CH <= 'z')
	{
		if (CH != 'e' && CH != 'q')
		{
			putchar(CH);
		}
		CH++;
	}
	putchar('\n');
	return (0);
}
