#include "lists.h"
/**
 * free_dlistint - Frees a list.
 * @head: Head of the list.
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *Temp;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
	}

	while ((Temp = head) != NULL)
	{
		head = head->next;
		free(Temp);
	}
}
