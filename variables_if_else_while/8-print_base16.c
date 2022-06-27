#include<stdio.h>
/**
 *main - Prints the numbers of
 *	 base 16 in lowercase,
 *	 followed by a new line.
 *
 *Return: Always 0 (Success)
 **/
int main(void)
{
	int N; /*numbers*/
	char L; /*letters*/

	for (N = 48; N < 58; N++)
	{
		putchar(N);
	}
	for (L = 'a'; L <= 'f'; L++)
	{
		putchar(L);
	}
	putchar('\n');
	return (0);
}
