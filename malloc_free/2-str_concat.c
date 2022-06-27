#include "main.h"
/**
 * str_concat - Concatenates two strings.
 * @s1: Character for string
 * @s2: Character for string
 * Return: NULL (Failure), StrConcat (Success).
 **/
char *str_concat(char *s1, char *s2)
{
	char *StrConcat;
	unsigned int StrA, StrB, StrC, Limit;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = " ";
		s2 = " ";
	}
	for (StrA = 0; s1[StrA] != '\0'; StrA++)
	{
		;
	}
	for (StrB = 0; s2[StrB] != '\0'; StrB++)
	{
		;
	}
	StrConcat = malloc(sizeof(char) * (StrA + StrB + 1));
	if (StrConcat == NULL)
	{
		free(StrConcat);
		return (NULL);
	}
	for (StrC = 0; StrC < StrA; StrC++)
	{
		StrConcat[StrC] = s1[StrC];
	}
	Limit = StrB;
	for (StrB = 0; StrB <= Limit; StrC++, StrB++)
	{
		StrConcat[StrC] = s2[StrB];
	}
	return (StrConcat);
}

