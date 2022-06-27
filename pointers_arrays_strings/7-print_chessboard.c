#include "main.h"
/**
 * print_chessboard - Prints chessboard
 * @a: Two dimensional array for chessboard
 **/
void print_chessboard(char (*a)[8])
{
	int BCP, WCP;

	for (BCP = 0; BCP < 8; BCP++)
	{
		for (WCP = 0; WCP < 8; WCP++)
		{
			_putchar(a[BCP][WCP]);
		}
		_putchar('\n');
	}
}
