#include "main.h"
int _strcmp(char *s1, char *s2);

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1 = s1 + 1;
		s2 = s2 + 1;
	}
	return (*s1 - *s2);
}
