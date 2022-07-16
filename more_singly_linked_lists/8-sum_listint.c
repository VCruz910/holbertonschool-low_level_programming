#include "lists.h"
/**
 * sum_listint - Returns the sum of all list data
 * @head: Header of list.
 * Return: (SUM).
 **/
int sum_listint(listint_t *head)
{
	int SUM = 0;

	while (head != NULL)
	{
		SUM += head->n;
		head = head->next;
	}
	return (SUM);
}
