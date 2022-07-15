#include "lists.h"
/**
 * print_list - Prints all elements of a list_t list.
 * @h: Constant Struct Variable for the Singly
 *		Linked List.
 * Return: The number of the list's elements (SLNum).
 **/
size_t print_list(const list_t *h)
{
	size_t SLNum = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		SLNum++;
	}
	return (SLNum);
}
