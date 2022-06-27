#include "main.h"
/**
 * string_nconcat - Concatenates two strings
 * @s1: Variable for the first string
 * @s2: Variable for the second string
 * @n: Variable for the bytes
 * Return: Pointer (Success), NULL (Failure)
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *CStr;
	unsigned int SL1, SL2, CSOut, I;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	for (SL1 = 0; s1[SL1] != '\0'; SL1++)
	{
		;
	}
	for (SL2 = 0; s2[SL2] != '\0'; SL2++)
	{
		;
	}

	if (n > SL2)
	{
		n = SL2;
	}

	CSOut = SL1 + n;
	CStr = malloc(CSOut + 1);
	if (CStr == NULL)
	{
		return (NULL);
	}
	for (I = 0; I < CSOut; I++)
	{
		if (I < SL1)
		{
			CStr[I] = s1[I];
		}
		else
		{
			CStr[I] = s2[I - SL1];
		}
	}
	CStr[I] = '\0';
	return (CStr);
}
