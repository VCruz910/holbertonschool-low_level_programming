#include "main.h"
char *_strcat(char *dest, char *src);
<<<<<<< HEAD

char *_strncat(char *dest, char *src, int n)
{
	int Str001 = 0, Str002 = 0;

	while (dest[Str001] != '\0')
	{
		Str001++;
	}
	while (src[Str002] != '\0' && Str002 < n)
	{
		dest[Str001] = src[Str002];
		Str001++;
		Str002++;
	}
	dest[Str001] = '\0';
	return (dest);
	_putchar('\n');
}
=======
>>>>>>> 3617c962470d0f7150e1cede55f17755eb1cc3d3
