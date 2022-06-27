#include"main.h"
/**
  * _islower - Checks for lowercase
  *		characters.
  *
  * @c: Variable for ASCII characters
  *
  * Return: 1 (Success), 0 (Failure)
  **/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
