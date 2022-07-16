#include "lists.h"
/**
 * pop_listint - Deletes the Head Node of a list.
 * @head: Header of the list.
 * Return: The Head Node's Data (HND).
 **/
int pop_listint(listint_t **head)
{
	listint_t *H;
	listint_t *Curr;
	int HND;

	if (*head == NULL)
	{
		return (0);
	}
	Curr = *head;
	HND = Curr->n;
	H = Curr->next;
	free(Curr);
	*head = H;
	return (HND);
}
