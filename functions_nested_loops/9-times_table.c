#include "main.h"
<<<<<<< HEAD

=======
/**
  * times_table - Prints the 9 times table
  *	starting with zero.
  *
  **/
>>>>>>> 8847fedf935efb7f75bb9607b3164939342633d3
void times_table(void)
{
	int A, B, OP;

	for (A = 0; A <= 9; A++)
	{
		_putchar(48);
		for (B = 1; B <= 9; B++)
		{
			OP = A * B;
			_putchar(44);
			_putchar(32);
			if (OP <= 9)
			{
				_putchar(32);
				_putchar(OP + 48);
			}
			else
			{
				_putchar((OP / 10) + 48);
				_putchar((OP % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
