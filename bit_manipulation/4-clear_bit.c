#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at given index
 * @n: Number Pointer
 * @index: Index Variable
 * Return: 1
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);
	return (1);
}
