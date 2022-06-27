#include <unistd.h>
#include <stdio.h>
/**
 * main - Prints all different combinations
 *	of two digits
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int D1, D2;

	for (D1 = '0'; D1 <= '9'; D1++)
	{
		for (D2 = '0'; D2 <= '9'; D2++)
		{
			if (D1 < D2)
			{
				putchar(D1);
				putchar(D2);
				if (D1 != '8' || (D1 == '8' && D2 != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
