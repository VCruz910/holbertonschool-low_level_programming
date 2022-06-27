#include "main.h"
char *_strpbrk(char *s, char *accept);

char *_strpbrk(char *s, char *accept)
{
	unsigned int Point, Search;

	for (Point = 0; *(s + Point) != '\0'; Point++)
	{
		for (Search = 0; *(accept + Search) != '\0'; Search++)
		{
			if (*(s + Point) == *(accept + Search))
			{
				return (s + Point);
			}
		}
	}
	return ('\0');
}
