#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a linked list.
 * @head: Head of the list.
 * @index: Node Index
 * Return: head
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int GNode;

	if (head == NULL)
	{
		return (NULL);
	}

	GNode = 0;
	while (head != NULL)
	{
		if (GNode == index)
		{
			break;
		}
		head = head->next;
		GNode++;
	}
	return (head);
}
