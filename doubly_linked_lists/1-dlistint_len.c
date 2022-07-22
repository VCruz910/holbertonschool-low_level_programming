#include "lists.h"
/**
 * dlistint_len - Returns number of elements linked
 * @h: Header of list.
 * Return: COUNTER
 **/
size_t dlistint_len(const dlistint_t *h)
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
		COUNTER++;
		h = h->next;
	}
	return (COUNTER);
}
