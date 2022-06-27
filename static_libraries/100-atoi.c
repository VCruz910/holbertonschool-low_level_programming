#include "main.h"

int _atoi(char *s)
{
	unsigned int Count = 0, Size = 0, OI = 0, PN = 1, M = 1, I;
	
	while (*(s + Count) != '\0')
	{
		if (Size > 0 && (*(s + Count) < '0' || *(s + Count) > '9'))
		{
			break;
		}
		if (*(s + Count) == '-')
		{
			PN *= -1;
		}
		if ((*(s + Count) >= '0') && (*(s + Count) <= '9'))
		{
			if (Size > 0)
			{
				M *= 10;
			}
			Size++;
		}
		Count++;
	}
	for (I = Count - Size; I < Count; I++)
	{
		OI = OI + ((*(s + I) - 48) * M);
		M /= 10;
	}
	return (OI * PN);
}

