#include<stdio.h>
/**
 *main - Prints the alphabet
 *	 in reverse followed
 *	 by a new line.
 *
 *Return: Always 0 (Success)
 **/
int main(void)
{
	char ZA;

	for (ZA = 'z'; ZA >= 'a'; ZA--)
	{
		putchar(ZA);
	}
	putchar('\n');
	return (0);
}
