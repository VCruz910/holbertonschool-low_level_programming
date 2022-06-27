#include "main.h"
#include <stdio.h>
/**
 * main - Finds and prints the largest prime
 *		factor of the number 612852475143,
 *		followed by a new line.
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	long int Num, PFactor;

	Num = 612852475143;
	for (PFactor = 2; PFactor <= Num; PFactor++)
	{
		if (Num % PFactor == 0)
		{
			Num /= PFactor;
			PFactor--;
		}
	}
	printf("%ld\n", PFactor);
	return (0);
}
