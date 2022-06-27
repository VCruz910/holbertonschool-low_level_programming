#include "main.h"
/**
 * _isupper - Checks for uppercase characters.
 *
 * @c: Variable for uppercase.
 *
 * Return: 1 (Uppercase), 0 (LOwercase).
 **/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
