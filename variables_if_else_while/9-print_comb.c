#include<stdio.h>
/**
 *main - Prints all possible
 *	 combinations of a
 *	 single-digit numbers.
 *
 *Return: Always 0 (Success)
 **/
int main(void)
{
	int Num;

	for (Num = 48; Num < 58; Num++)
	{
		putchar(Num);
		if (Num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
