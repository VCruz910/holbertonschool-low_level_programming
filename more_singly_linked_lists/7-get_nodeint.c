#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a list
 * @head: Header of a list.
 * @index: Node Index
 * Return: nth node.
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int Node;

	for (Node = 0; Node < index && head != NULL; Node++)
	{
		head = head->next;
	}
	return (head);
}
