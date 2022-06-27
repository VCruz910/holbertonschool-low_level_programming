#include "main.h"
/**
 * _strlen_recursion - Returns the lenght of a string.
 * @s: Character for string.
 * Return: 1 + _strlen_recursion(s + 1) (Success).
 **/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
