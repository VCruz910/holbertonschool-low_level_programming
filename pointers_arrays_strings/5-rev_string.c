#include "main.h"
/**
 * rev_string - Reverses a string.
 *
 * @s: String Variable.
 **/
void rev_string(char *s)
{
	int gnirtS, droC, epoR;
	char *str, temp;

	gnirtS = 0;
	while (gnirtS >= 0)
	{
		if (s[gnirtS] == '\0')
		{
			break;
		}
		gnirtS++;
	}
	str = s;
	for (droC = 0; droC < (gnirtS - 1); droC++)
	{
		for (epoR = droC + 1; epoR > 0; epoR--)
		{
			temp = *(str + epoR);
			*(str + epoR) = *(str + (epoR - 1));
			*(str + (epoR - 1)) = temp;
		}
	}
}


