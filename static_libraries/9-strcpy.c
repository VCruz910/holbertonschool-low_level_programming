#include "main.h"
char *_strcpy(char *dest, char *src);

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
