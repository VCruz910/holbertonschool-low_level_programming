#include "dog.h"
/**
 * print_dog - Prints struct dog.
 * @d: Name of the struct data type.
 * Return: 0 (Success).
 **/
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d == NULL)
		{
			return;
		}

		if (d->name == NULL && d->owner == NULL)
		{
			d->name = "(nil)";
			d->owner = "(nil)";
		}
		else
		{
			printf("Name: %s\n", d->name);
			printf("Owner: %s\n", d->owner);
		}

		if (d->age <= 0)
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Age: %.6f\n", d->age);
		}
	}
}


