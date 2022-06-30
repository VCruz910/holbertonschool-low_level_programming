#include "function_pointers.h"
/**
 * print_name - Prints a name.
 * @name: Character for name
 * @f: Pointer for function f(char *).
 * Return: Nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
