#include <stdio.h>
#include "main.h"
/**
 * main - Prints the numbers from 1 to 100,
 *		prints Fizz on multiples of 3, prints
 *		Buzz on multiples of 5, and prints,
 *		FizzBuzz on multiples between 3 and 5.
 *
 *Return: Always 0 (Success).
 **/
int main(void)
{
	int NumFB;

	for (NumFB = 1; NumFB <= 100; NumFB++)
	{
		if (NumFB % 3 == 0 && NumFB % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (NumFB % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (NumFB % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (NumFB == 1)
		{
			printf("%d", NumFB);
		}
		else
		{
			printf(" %d", NumFB);
		}
	}
	printf("\n");
	return (0);
}
