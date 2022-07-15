#include "lists.h"
/**
 * print_listint - Prints all the list's elements
 * @h: Header of the list.
 * Return: Node's Elements (N_Elem).
 **/
size_t print_listint(const listint_t *h)
{
	/*Variables*/
	size_t N_Elem = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		N_Elem++;
	}
	return (N_Elem);
}
