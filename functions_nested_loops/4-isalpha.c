#include"main.h"
/**
  * _isalpha - Checks for alphabetic
  *		character
  *
  * @c: Variable for ASCII
  *
  * Return: 1 (Success), 0 (Failure)
  **/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
