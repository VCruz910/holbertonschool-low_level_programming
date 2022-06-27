#include "main.h"
char *_memset(char *s, char b, unsigned int n);

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int MSet;

	for (MSet = 0; MSet < n; MSet++)
	{
		*(s + MSet) = b;
	}
	return (s);
}
