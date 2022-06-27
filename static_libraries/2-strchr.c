#include "main.h"
char *_strchr(char *s, char c);

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
