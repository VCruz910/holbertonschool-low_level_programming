#include "main.h"
/**
 * *_strchr - locates a character in a string.
 * @s: String variable.
 * @c: Character variable.
 * Return: NULL (Success)
 **/
char *_strchr(char *s, char c)
{
	unsigned int StrChar = 0;

	for (; *(s + StrChar) != '\0'; StrChar++)
	{
		if (*(s + StrChar) == c)
		{
			return (s + StrChar);
		}
	}
	if (*(s + StrChar) == c)
	{
		return (s + StrChar);
	}
	return ('\0');
}
