#include "main.h"
/**
 * get_bit - REturns value of a bit at a given index
 * @n: Number Variable
 * @index: Index Variable
 * Return: Bit's Value (BitVal)
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	int BitVal = (n >> index) & 1;

	if (index > 63)
	{
		return (-1);
	}
	return (BitVal);
}
