#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int MCopy;

	for (MCopy = 0; MCopy < n; MCopy++)
	{
		*(dest + MCopy) = *(src + MCopy);
	}
	return (dest);
}
