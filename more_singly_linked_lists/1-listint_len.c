#include "lists.h"
/**
 * listint_len - Returns the number of elements of the list.
 * @h: Header of the list.
 * Return: Number of elements (Num_El).
 **/
size_t listint_len(const listint_t *h)
{
	size_t Num_El = 0;

	while (h != NULL)
	{
		h = h->next;
		Num_El++;
	}
	return (Num_El);
}
