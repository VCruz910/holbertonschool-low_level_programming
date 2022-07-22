#include "lists.h"
/**
 * print_dlistint - Prints all elements of a list
 * @h: Header of list.
 * Return: COUNTER
 **/
size_t print_dlistint(const dlistint_t *h)
{
	int COUNTER = 0;

	if (h == NULL)
	{
		return (COUNTER);
	}
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		COUNTER++;
		h = h->next;
	}
	return (COUNTER);
}
