#include "main.h"
/**
 * *_memset - Fills memory with a constant byte.
 * @s: Character for memory area.
 * @b: Character for constant byte.
 * @n: Unsigned Integer for bytes filled.
 * Return: s (Success).
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int MSet;

	for (MSet = 0; MSet < n; MSet++)
	{
		*(s + MSet) = b;
	}
	return (s);
}
