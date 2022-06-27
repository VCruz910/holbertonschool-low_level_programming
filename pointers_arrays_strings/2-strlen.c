#include "main.h"
/**
 * _strlen - Returns the lenght of a string.
 *
 * @s: Variable for the string.
 *
 * Return: String lenght value (Counter).
 **/
int _strlen(char *s)
{
	int Counter;

	Counter = 0;
	while (*(s + Counter) != 0)
	{
		Counter++;
	}
	return (Counter);
}
