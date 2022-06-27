#include "main.h"
/**
 * *_strcpy - Copies the string pointed to by src,
 *			including the terminating null byte (\0),
 *			to the buffer pointed to by dest.
 *
 * @dest: Variable for destination.
 *
 * @src: Variable for source.
 *
 * Return: Destination (dest).
 **/
char *_strcpy(char *dest, char *src)
{
	int CounterStrCpy;

	CounterStrCpy = 0;
	while (CounterStrCpy >= 0)
	{
		*(dest + CounterStrCpy) = *(src + CounterStrCpy);
		if (*(src + CounterStrCpy) == '\0')
		{
			break;
		}
		CounterStrCpy++;
	}
	return (dest);
}
