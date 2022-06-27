#include<stdio.h>
/**
 * main -Prints single digit
 *	 numbers of base 10
 *	 starting from 0,
 *	 followed by a new
 *	 line.
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int Nz;

	for (Nz = 48; Nz < 58; Nz++)
	{
		putchar(Nz);
	}
	putchar('\n');
	return (0);
}
