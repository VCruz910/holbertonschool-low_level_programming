#include "main.h"
/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *				which contains a copy of the string given as a parameter.
 * @str: Character for string.
 * Return: StrOut (Success)
 **/
char *_strdup(char *str)
{
	char *StrOut;
	unsigned int Str1, Str2;

	if (str == NULL)
	{
		return (NULL);
	}
	for (Str1 = 0; str[Str1] != '\0'; Str1++)
	{
		;
	}
	StrOut = (char *)malloc(sizeof(char) * (Str1 + 1));
	if (StrOut == NULL)
	{
		return (NULL);
	}
	for (Str2 = 0; Str2 <= Str1; Str2++)
	{
		StrOut[Str2] = str[Str2];
	}
	return (StrOut);
}
