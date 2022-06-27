#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 *
 * @a: First integer for pointer of value 98.
 *
 * @b: Second integer for pointer of value 42.
 **/
void swap_int(int *a, int *b)
{
	int sv;

	sv = *a;
	*a = *b;
	*b = sv;
}
