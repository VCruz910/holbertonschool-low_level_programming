#include "main.h"
int _strlen(char *s);

int _strlen(char *s)
{
	int Counter;

	Counter = 0;
	while (*(s + Counter) != 0)
	{
		Counter++;
	}
	return (Counter);
}
