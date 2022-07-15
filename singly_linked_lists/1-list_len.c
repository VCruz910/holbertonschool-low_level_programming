#include "lists.h"
/**
 * list_len - Returns the number of elements in
 *				a linked list.
 * @h: Variable for Singly Linked List.
 * Return: The list's number of elements (NumEl).
 **/
size_t list_len(const list_t *h)
{
	size_t NumEl = 0;

	while (h != NULL)
	{
		h = h->next;
		NumEl++;
	}
	return (NumEl);
}
