#include<unistd.h>
#include<stdio.h>
/**
 * main - Prints all possible combinations
 *	of two two-digit numbers.
 *
 *Return: Always 0 (Success)
 **/
int main(void)
{
	int D1, D2, D3, D4;

	for (D1 = 48; D1 <= 57; D1++)
	{
		for (D2 = 48; D2 <= 57; D2++)
		{
			for (D3 = 48; D3 <= 57; D3++)
			{
				for (D4 = 48; D4 <= 57; D4++)
				{
					if (((D3 + D4) > (D1 + D2) && D3 >= D1) || D1 < D3)
					{
					putchar(D1);
					putchar(D2);
					putchar(' ');
					putchar(D3);
					putchar(D4);
					if (D1 + D2 + D3 + D4 == 227 && D1 == 57)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
