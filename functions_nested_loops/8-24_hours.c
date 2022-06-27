#include"main.h"
/**
  * jack_bauer - Prints every minute of
  *	the day of Jack Bauer, starting
  *	from 00:00 to 23:59.
  **/
void jack_bauer(void)
{
	int Hour, Second;

	Hour = 0;
	while (Hour < 24)
	{
		Second = 0;
		while (Second < 60)
		{
			_putchar((Hour / 10) + '0');
			_putchar((Hour % 10) + '0');
			_putchar(':');
			_putchar((Second / 10) + '0');
			_putchar((Second % 10) + '0');
			_putchar('\n');
			Second++;
		}
		Hour++;
	}
}
