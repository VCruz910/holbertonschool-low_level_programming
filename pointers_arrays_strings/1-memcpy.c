#include "main.h"
/**
 * *_memcpy - Copies memory area.
 * @dest: Destination variable.
 * @src: Source variable.
 * @n: byte variable.
 * Return: Destination (Success).
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int MCopy;

	for (MCopy = 0; MCopy < n; MCopy++)
	{
		*(dest + MCopy) = *(src + MCopy);
	}
	return (dest);
}
