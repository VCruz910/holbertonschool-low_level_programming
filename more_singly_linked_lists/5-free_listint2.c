#include "lists.h"
/**
 * free_listint2 - Frees a list and sets the head to NULL.
 * @head: Header of the list.
 **/
void free_listint2(listint_t **head)
{
	listint_t *Temp;
	listint_t *Curr;

	if (head != NULL)
	{
		Curr = *head;
		while ((Temp = Curr) != NULL)
		{
			Curr = Curr->next;
			free(Temp);
		}
	}
	*head = NULL;
}


