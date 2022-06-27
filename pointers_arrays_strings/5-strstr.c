#include "main.h"
/**
 * *_strstr - Locates a substring.
 * @haystack: Variable for string.
 * @needle: Variable for substring.
 * Return: Haystack (Success), NULL (Failure)
 **/
char *_strstr(char *haystack, char *needle)
{
	char *ND;
	char *HS;

	while (*haystack != '\0')
	{
		ND = needle;
		HS = haystack;
		while (*haystack != '\0' && *ND != '\0' && *haystack == *ND)
		{
			haystack++;
			ND++;
		}
		if (!*ND)
		{
			return (HS);
		}
		haystack = HS + 1;
	}
	return (0);
}
