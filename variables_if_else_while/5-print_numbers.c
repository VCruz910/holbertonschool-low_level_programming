#include <stdio.h>
/**
 *main -Prints all single digit
 *	numbers of base 10 start-
 *	ing fron 0, followed by
 *	a new line.
 *Return: Always 0 (Success)
 **/
int main(void)
{
	int Number;

	for (Number = 0; Number < 10; Number++)
	{
		printf("%d", Number);
	}
	printf("\n");
	return (0);
}
