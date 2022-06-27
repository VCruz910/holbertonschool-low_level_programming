#include "main.h"
/**
 * _strspn - Getrs the length of a prefix substring.
 * @s: Ignitial segment variable.
 * @accept: Accepted bytes variable.
 * Return: StrVal (Success)
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int StrVal, AoR, bool;

	for (StrVal = 0; *(s + StrVal) != '\0'; StrVal++)
	{
		bool = 1;
		for (AoR = 0; *(accept + AoR) != '\0'; AoR++)
		{
			if (*(s + StrVal) == *(accept + AoR))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
		{
			break;
		}
	}
	return (StrVal);
}
