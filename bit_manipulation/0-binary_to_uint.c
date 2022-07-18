#include "main.h"
/**
 * binary_to_uint - Converts binary to a  unsigned int.
 * @b: Binary number string.
 * Return: Converted value (DecVal).
 **/
unsigned int binary_to_uint(const char *b)
{
	int BM = 0;
	unsigned int DecVal = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (; b[BM] ; BM++)
	{
		if (b[BM] < '0' || b[BM] > '1')
		{
			return (0);
		}
		DecVal = 2 * DecVal + (b[BM] - '0');

	}
	return (DecVal);
}
