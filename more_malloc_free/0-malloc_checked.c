#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Unsigned integer for byte.
 * Return: Pointer (Success).
 **/
void *malloc_checked(unsigned int b)
{
	/*Character for pointer*/
	char *Pointer;

	/*Using malloc to allocate memory*/
	Pointer = malloc(b);
	/*Exits and returs 98 if unsuccessful*/
	if (Pointer == NULL)
	{
		exit(98);
	}
	/*Returs pointer if successful*/
	return (Pointer);
}
