#include "main.h"
/**
 * *leet - Encodes a string into leet.
 * @N: String Variable.
 * Return: N (Success)
 **/
char *leet(char *N)
{
	int Counter, LE37;
	int aeotl[] = {97, 101, 111, 116, 108};
	int AEOTL[] = {65, 69, 79, 84, 76};
	int Num83I25[] = {52, 51, 48, 55, 49};

	Counter = 0;
	while (*(N + Counter) != '\0')
	{
		for (LE37 = 0; LE37 < 5; LE37++)
		{
			if (*(N + Counter) == aeotl[LE37] || *(N + Counter) == AEOTL[LE37])
			{
				*(N + Counter) = Num83I25[LE37];
				break;
			}
		}
		Counter++;
	}
	return (N);
}
