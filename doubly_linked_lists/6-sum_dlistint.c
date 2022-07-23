#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data of a linked list.
 * @head: Head of a list
 * Return: SUM
 **/
int sum_dlistint(dlistint_t *head)
{
	int SUM = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
		while (head != NULL)
		{
			SUM += head->n;
			head = head->next;
		}
	}
	return (SUM);
}
