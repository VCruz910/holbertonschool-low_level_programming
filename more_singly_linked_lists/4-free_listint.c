#include "lists.h"
/**
 * free_listint - Frees a list.
 * @head: Header of list.
 **/
void free_listint(listint_t *head)
{
	listint_t *Temp;

	while ((Temp = head) != NULL)
	{
		head = head->next;
		free(Temp);
	}
}
